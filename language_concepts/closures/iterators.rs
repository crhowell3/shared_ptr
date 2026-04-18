// iterators.rs

fn main() {
    let list = vec![1, 2, 3];
    println!("Previous list: {:?}", list);

    let new_list: Vec<_> = list.iter().map(|x| x * x).collect();
    println!("New list: {:?}", new_list);
}
