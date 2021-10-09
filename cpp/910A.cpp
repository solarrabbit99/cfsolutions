#include <iostream>

using namespace std;

int solve(int N, int d, char lils[]) {
  int lasts[N];
  int last = 0;
  for (int i = 0; i < N; i++) {
    if (lils[i] == '1') {
      last = i;
    }
    lasts[i] = last;
  }

  int current = 0;
  int steps = 0;
  while(current < N-1) {
    int next = lasts[min(current + d, N-1)];
    if (next == current) {
      return -1;
    }
    steps++;
    current = next;
  }

  return steps;
}

int main() {
  int N, d;
  cin >> N >> d;
  char lils[N];
  for (int i = 0; i < N; i++) {
    cin >> lils[i];
  }

  cout << solve(N, d, lils) << "\n";
  return 0;
}
