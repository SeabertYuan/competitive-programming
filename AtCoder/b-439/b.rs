use std::io::stdin;
use std::collections::{HashMap, HashSet};

fn solve(n: i32) {
    fn split(n:i32) -> Vec<i32> {
        let mut m = n;
        let mut digits = Vec::new();
        let mut divisor = 1000;

        while divisor >= 10 {
            let digit = m/divisor;
            m = n % divisor;
            digits.push(digit);
            divisor /= 10;
        }
        digits.push(m);
        digits
    }

    let mut happy_num = HashMap::new();
    let mut visited = HashSet::new();
    let digits = split(n);

    fn is_happy(n: i32, dig: &[i32], visited: &mut HashSet<i32>, happy_num: &mut HashMap<i32, bool>) -> bool {
        let next_num = dig.iter().fold(0, |acc, e| e*e + acc);

        if !visited.insert(n) {
            return false;
        }

        if next_num == 1 {
            happy_num.insert(n, true);
            return true;
        } else if let Some(cached) = happy_num.get(&next_num) {
            return *cached;
        } else {
            return is_happy(next_num, &split(next_num), visited, happy_num);
        }
    };

    if is_happy(n, &digits, &mut visited, &mut happy_num) {
        println!("Yes");
    } else {
        println!("No");
    }
}

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();

    let n: i32 = input.trim().parse().unwrap();
    
    solve(n);
}
