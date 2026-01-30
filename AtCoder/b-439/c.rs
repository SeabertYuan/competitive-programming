use std::io::stdin;
use std::collections::HashMap;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();

    let n = input.trim().parse().unwrap();

    let mut squares = Vec::new();

    let mut square_root = 0;
    while square_root * square_root < n {
        squares.push(square_root * square_root);
        square_root += 1;
    }

    let mut pairs = HashMap::new();

    for i in 1..squares.len() {
        for j in i+1..squares.len() {
            let sum = squares[i] + squares[j];

            if sum > n {
                break;
            }

            if let Some(prev) = pairs.get_mut(&sum) {
                *prev += 1;
            } else {
                pairs.insert(sum, 1);
            }
        }
    }

    let mut good_n: Vec<i32> = pairs.iter().filter_map(|(k, v)| if *v == 1 { Some(*k) } else { None }).collect();

    good_n.sort();

    let num_good_n = good_n.len();

    println!("{num_good_n}");

    if num_good_n == 0 {
        println!("");
        return;
    }

    for (i, n) in good_n.into_iter().enumerate() {
        print!("{n}");

        if i != num_good_n - 1 {
            print!(" ");
        } else {
            print!("\n");
        }
    }
}
