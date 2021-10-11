#include <iostream>

using namespace std;

int solve(int v) {
  int sum = 0;
  for (int i = 2; i < v; i++) {
    sum += i*(i+1);
  }
  return sum;
}

int main() {
  int input;
  cin >> input;
  cout << solve(input) << "\n";
  return 0;
}
