#include <iostream>
using namespace std;

bool primo(int num){
  if (num == 2){
    return true;
  }
  else if (num%2 == 0){
    return false;
  }
  for (int x = 3; x*x <= num; x++){
    if (num % x == 0){
      return false;
    }
  }
  return true;
}

int main() {
  long long primos = 0;
  for (int x = 2; x <= 2000000; x++){
    if(primo(x)){
      primos += x;
    }
  }
  cout << primos;
}