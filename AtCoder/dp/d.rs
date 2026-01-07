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

    for i in 0..n {
        input.clear();
        stdin().read_line(&mut input).unwrap();
        let line: Vec<i32> = input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();
        weights[i] = line[0];
        values[i] = line[1];
    }
    // 2d dp array, [w, n]
    // given the ith item and W capacity:
    // if i == 0:
    //      only one way, 0
    // if capacity == 0:
    //      only 1 way, 0
    // if i > 0 && capacity > 0:
    //      pick maximum between [i-1] (not picking)
    //      or pick [i-1] where capacity is constrained by capacity - w_i
    //      
    // Must store 
    let mut dp = vec![vec![0; n as usize + 1]; w as usize + 1];
    for i in 1..=w {
        for j in 1..=n {
            let l = std::cmp::max(dp[i-1][j], dp[i-w[i]][j] + v[i]);
            let u = std::cmp::max(dp[i][j-1], dp[i][j]);
            let lu = std::cmp::max(dp[i-1][j-1], dp[i][j]);
            dp[i][j] = std::cmp::max(l, u);
            dp[i][j] = std::cmp::max(d[i][j], lu);
        }
    }
    dp[0][0] = 0, dp[0][1] = 0, dp[1][0] = 0

    dp[1][1] = 
}
