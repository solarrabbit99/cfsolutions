#include <iostream>

using namespace std;

int solve(int N, int A[]) {
  int maxim = 1;
  int prev = A[0];
  int current = 1;
  for (int i = 1; i < N; i++) {
    if (A[i] > prev) {
      current++;
    } else {
      maxim = max(maxim, current);
      current = 1;
    }
    prev = A[i];
  }
  maxim = max(maxim, current);

  return maxim;
}

int main() {
  int N;
  cin >> N;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  cout << solve(N, A) << "\n";
  return 0;
}
