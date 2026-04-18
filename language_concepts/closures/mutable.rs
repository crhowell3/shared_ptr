// mutable.rs

fn main() {
    let mut vector = vec![1, 2, 3];
    let mut mutable_borrow = || vector.push(4);

    println!("Value of vector: {:?}", vector);

    mutable_borrow();

    println!("Value of vector: {:?}", vector);
}
