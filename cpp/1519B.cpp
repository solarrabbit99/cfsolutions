#include <iostream>

using namespace std;

bool solve(int n, int m, int k) {
  return n*m-1 == k;
}

int main() {
  int tests;
  cin >> tests;
  bool answers[tests];
  for (int i = 0; i < tests; i++) {
    int n, m, k;
    cin >> n >> m >> k;
    answers[i] = solve(n, m, k);
  }
  for (int i = 0; i < tests; i++) {
    if (answers[i]) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
