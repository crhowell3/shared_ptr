// immutable.rs

fn main() {
    let vector = vec![1, 2, 3];

    let immutable_borrow = || println!("Value of vector: {:?}", vector);

    immutable_borrow();
}
