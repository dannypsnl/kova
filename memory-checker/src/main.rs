#[derive(Debug)]
struct Book {
    name: String,
    price: f32,
}

fn set_price_get_name(b: &String, p: &mut f32, price: f32) -> String {
    *p = price;
    b.clone()
}

fn main() {
    let mut book = Book {
        name: String::from("Rust Book"),
        price: 100.0,
    };

    set_price_get_name(&book.name, &mut book.price, 300.0);

    println!("{:?}", book);
}
