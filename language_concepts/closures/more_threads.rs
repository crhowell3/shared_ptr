// more_threads.rs

use std::thread;

fn main() {
    let big_list = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

    let thread = thread::spawn(move || {
        for x in big_list {
            println!("Value: {}", x);
        }
    });

    thread.join().unwrap();
}
