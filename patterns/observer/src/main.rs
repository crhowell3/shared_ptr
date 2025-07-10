// main.rs

mod observer;
mod subject;

use crate::observer::{Observable, Observer};
use crate::subject::Subject;

use std::sync::Arc;

struct ExampleObserver {
    name: String,
}

impl ExampleObserver {
    fn new(name: &str) -> Arc<Self> {
        Arc::new(Self { name: name.into() })
    }
}

impl Observer for ExampleObserver {
    type Subject = Subject;
    fn observe(&self, subject: &Self::Subject) {
        println!(
            "observed subject with state={:?} in {}",
            subject.state(),
            self.name
        );
    }
}

fn main() {
    let mut subject = Subject::new("some subject state");

    let observer1 = ExampleObserver::new("observer1");
    let observer2 = ExampleObserver::new("observer2");

    subject.attach(observer1.clone());
    subject.attach(observer2.clone());

    subject.update();
}
