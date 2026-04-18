// undead.rs

use std::marker::PhantomData;

struct Undead<'a, T> {
    arbitrary_memory: *const T,
    phantom: PhantomData<&'a T>,
}

fn main() {
    let vec: Vec<u8> = vec![];
    let ptr = vec.as_ptr();
    let undead = Undead {
        arbitrary_memory: ptr,
        phantom: PhantomData,
    };
}
