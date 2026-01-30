use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let n: i32 = input.trim().parse().unwrap();

    let res = 2i32.pow(n as u32) - 2i32*n;
    println!("{res}");
}
