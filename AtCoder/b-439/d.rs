use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();

    let n = input.trim().parse().unwrap();

    input.clear();
    stdin().read_line(&mut input).unwrap();

    let arr = input.trim().split_whitespace().map(|x| x.trim().parse().unwrap()).collect();

}
