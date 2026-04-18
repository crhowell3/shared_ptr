// ghosts.rs

use std::marker::PhantomData;

#[derive(Debug, PartialEq)]
struct Car<Make> {
    color: String,
    model: PhantomData<Make>,
}

#[derive(Debug, PartialEq)]
struct Nissan {}

#[derive(Debug, PartialEq)]
struct Chevrolet {}

#[derive(Debug, PartialEq)]
struct Ford {}

impl Car<Nissan> {
    fn make(&self) -> &str {
        "Nissan"
    }
}

impl Car<Chevrolet> {
    fn make(&self) -> &str {
        "Chevrolet"
    }
}

impl Car<Ford> {
    fn make(&self) -> &str {
        "Ford"
    }
}

fn main() {
    let nissan: Car<Nissan> = Car {
        color: "blue".into(),
        model: PhantomData,
    };

    let chevy: Car<Chevrolet> = Car {
        color: "silver".into(),
        model: PhantomData,
    };

    let ford: Car<Ford> = Car {
        color: "red".into(),
        model: PhantomData,
    };

    println!("{}", nissan.make());
    println!("{}", chevy.make());
    println!("{}", ford.make());
}
