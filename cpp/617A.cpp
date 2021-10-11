#include <iostream>

using namespace std;

int solve(int n) {
  return n%5>0 ? n/5+1 : n/5;
}

int main() {
  int input;
  cin >> input;
  cout << solve(input) << "\n";
  return 0;
}
