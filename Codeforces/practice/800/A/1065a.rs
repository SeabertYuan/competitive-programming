use std::io::stdin;
fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let t: usize = input.trim().parse().unwrap();

    for i in 0..t {
        let mut input = String::new();
        stdin().read_line(&mut input).unwrap();
        let n: i32 = input.trim().parse().unwrap();
        if n%2 != 0 {
            println!("0");
        } else {
            println!("{}", n/4 + 1);
        }
    }
}
