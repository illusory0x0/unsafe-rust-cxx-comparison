fn main() {
  let x : i32 = 1;
  let rx : &i32 = &x; 
  let px : *const i32 = unsafe { 
    // Rust 并没有解引用，&直接*把引用解释成指针。
    std::mem::transmute(rx)
  } ;
  println!("x: {}",x);
  println!("rx: {}",rx);
  println!("px: {}",unsafe { *px });
}