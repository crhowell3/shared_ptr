// observer.rs

pub trait Observer {
    type Subject;
    fn observe(&self, subject: &Self::Subject);
}

pub trait Observable {
    type Observer;
    fn update(&self);
    fn attach(&mut self, observer: Self::Observer);
    fn detach(&mut self, observer: Self::Observer);
}
