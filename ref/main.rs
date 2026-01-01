fn main() {
  let x : i32 = 1;
  let rx : &i32 = &x; 
  let px : *const i32 = unsafe { 
    std::mem::transmute(rx)
  } ;
  println!("x: {}",x);
  println!("rx: {}",rx);
  println!("px: {}",unsafe { *px });
}