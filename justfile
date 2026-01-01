init: 
  mkdir target 2> /dev/null || 0

ref:
  g++ -o target/cpp-ref ref/main.cpp 
  rustc -o target/rs-ref ref/main.rs 