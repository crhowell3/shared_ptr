// ownership.rs

use std::thread;

fn main() {
    let vector = vec![1, 2, 3];

    thread::spawn(|| println!("Value of vector: {:?}", vector))
        .join()
        .unwrap();
}
