// callbacks.rs

fn do_something<F: Fn()>(callback: F) {
    callback();
}

fn main() {
    do_something(|| println!("Executing callback"));
}
