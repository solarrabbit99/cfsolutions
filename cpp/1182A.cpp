#include <iostream>
#include <cmath>

using namespace std;

int solve(int input) {
  return input%2==1 ? 0 : pow(2, input/2);
}

int main(){
  int input;
  cin >> input;
  cout << solve(input) << "\n";
  return 0;
}
