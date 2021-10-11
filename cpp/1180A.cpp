#include <iostream>

using namespace std;

int solve(int input){
  return input*input + (input-1)*(input-1);
}

int main(){
  int input;
  cin >> input;
  cout << solve(input) << "\n";
  return 0;
}
