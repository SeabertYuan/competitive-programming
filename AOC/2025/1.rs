use std::io::stdin;

fn main() {
    let mut dial = 50;
    let mut ans = 0;
    let mut input = String::new();
    while let Some(_) = stdin().read_line(&mut input).ok() {
        let op: &str = input.trim();
        if op.len() < 2 {
            break;
        }
        let amount: i32 = op[1..].parse().unwrap();
        match &op[0..1] {
            "L" => {
                dial -= amount;
            }
            "R" => {
                dial += amount;
            }
            _ => unreachable!(),
        }
        if dial < 0 {
            dial += 100;
        } else if dial > 99 {
            dial -= 100;
        }
        if dial == 0 {
            ans += 1;
        }
        input.clear();
    }
    println!("{}", ans);
}
