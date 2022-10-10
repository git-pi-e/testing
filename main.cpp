#include <cp/cp.hpp>

void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  cp::println("My first program.");
  cp::println(42);
  cp::println(false);
  cp::println();
  cp::println(3.14);
  //Changed docker-compose.yml
  
  int arr[10];
  for(int i = 0; i < 10 ; i++) arr[i] = 10 - i;
  for(int i = 0; i < 5; i++) swap(arr[i], arr[10-i]);
  
  return 0;
}
