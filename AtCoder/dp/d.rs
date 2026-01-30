use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let line: Vec<i32> = input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();
    let n = line[0];
    let w = line[1];

    // sort by weights
    let mut weights = vec![0; n as usize];
    let mut values = vec![0; n as usize];

    for i in 0..(n as usize) {
        input.clear();
        stdin().read_line(&mut input).unwrap();
        let line: Vec<i32> = input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();
        weights[i] = line[0];
        values[i] = line[1];
    }

    let mut mem = std::collections::HashMap::new();

    fn max_cost(cap: i32, n: i32, weights: &[i32], values: &[i32], mem: &mut std::collections::HashMap<(i32, i32), i64>) -> i64 {
        if n == 0 {
            if cap >= weights[0] {
                let val = values[0] as i64;
                mem.insert((cap, n), val);
                return val;
            } else {
                mem.insert((cap, n), 0i64);
                return 0i64;
            }
        }

        if let Some(val) = mem.get(&(cap, n)) {
            return *val;
        }

        if cap - weights[n as usize] >= 0 {
            let val = std::cmp::max(max_cost(cap - weights[n as usize], n - 1, weights, values, mem) + values[n as usize] as i64, max_cost(cap, n - 1, weights, values, mem));
            mem.insert((cap, n), val);
            return val;
        } else {
            return max_cost(cap, n - 1, weights, values, mem);
        }
    }

    let ans = max_cost(w, n-1, &weights, &values, &mut mem);
    println!("{ans}");
}
