use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();

    let line: Vec<i32> = input.trim().split_whitespace().map(|x| x.trim().parse().unwrap()).collect();
    let n = line[0];
    let w = line[1];

    let mut weights = vec![0; n as usize];
    let mut values = vec![0; n as usize];

    for i in 0..(n as usize) {
        input.clear();
        stdin().read_line(&mut input).unwrap();
        let line: Vec<i32> = input.trim().split_whitespace().map(|x| x.trim().parse().unwrap()).collect();
        weights[i] = line[0];
        values[i] = line[1];
    }

    let mut mem = std::collections::HashMap::new();

    fn max_val(cap: i32, n: i32, weights: &[i32], values: &[i32], mem: &mut std::collections::HashMap<(i32, i32), i32>) -> i32 {
        if n == 0 {
            let val = if cap >= weights[0] { values[0] } else { 0 };
            mem.insert((cap, n), val);
            return val;
        }

        if let Some(val) = mem.get(&(cap, n)) {
            return *val;
        }

        if cap - weights[n as usize] >= 0 {
            let val = std::cmp::max(max_val(cap - weights[n as usize], n - 1, weights, values, mem) + values[n as usize], max_val(cap, n - 1, weights, values, mem));
            mem.insert((cap, n), val);
            return val;
        } else {
            let val = max_val(cap, n - 1, weights, values, mem);
            mem.insert((cap, n), val);
            return val;
        }
    }

    let ans = max_val(w, n - 1, &weights, &values, &mut mem);
    println!("{ans}");
}
