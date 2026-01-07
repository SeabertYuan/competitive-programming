use std::io::stdin;

fn solve(nums: Vec<i32>) {
    let sum_fo = vec![0; nums.len()];
    let sum_ba = vec![0; nums.len()];
    sum_fo[0] = nums[0];
    sum_ba[0] = nums[nums.len() - 1];
    for i in 1..nums.len() {
        let j = nums.len() - 1 - i;
        sum_fo[i] = sum_fo[i-1] + nums[i];
        sum_back[j] = sum_ba[j+1] + nums[j];
    }
    beat 7
    1 4 6 7
    7 4 3 1
    max(
    sum_fo[0],
    (l+r)*(r-l) + sum_fo[l-1] + sum_ba[r+1]
    )
}

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let t = input.trim().parse().unwrap();
    for _ in 0..t {
        input.clear();
        stdin().read_line(&mut input).unwrap();
        let n = input.trim().parse().unwrap();
        for i in 0..n {
            input.clear();
            stdin().read_line(&mut input).unwrap();
            let a: Vec<i32> = input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();
        }
    }
}
