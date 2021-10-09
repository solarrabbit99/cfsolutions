#include <iostream>

using namespace std;

int solve(int input) {
  int count = 0;
  count += input/100;
  input = input % 100;
  count += input/20;
  input = input%20;
  count += input/10;
  input = input%10;
  count += input/5 + input%5;
  return count;
}

int main() {
  int input;
  cin >> input;
  cout << solve(input) << "\n";
  return 0;
}
