// spirits.rs

use std::marker::PhantomData;
use std::mem::size_of;

#[allow(dead_code)]
struct NoGhosts<T> {
    id: u32,
    data: T,
}

#[allow(dead_code)]
struct Haunted<T> {
    id: u32,
    data: PhantomData<T>,
}

fn main() {
    println!("Size of NoGhosts: {}", size_of::<NoGhosts<u32>>());
    println!("Size of Haunted: {}", size_of::<Haunted<u32>>());
}
