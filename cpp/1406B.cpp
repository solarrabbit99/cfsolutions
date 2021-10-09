#include <iostream>

using namespace std;
typedef long long ll;

void solve_max(int size, int input[], int index, int avail, ll mins[][6], ll maxes[][6]);
void solve_min(int size, int input[], int index, int avail, ll mins[][6], ll maxes[][6]);

ll solve(int size, int input[]) {
  ll mins[size][6], maxes[size][6];
  for (int i = 0; i < size; i++) {
    mins[i][0] = maxes[i][0] = 1;
  }
  maxes[size-1][1] = mins[size-1][1] = input[size-1];
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      if (i == j && i != 1) {
        mins[size-i][j] = maxes[size-i][j] = mins[size-i+1][j-1]*input[size-i];
      } else if (i > j) {
        solve_max(size, input, size-i, j, mins, maxes);
        solve_min(size, input, size-i, j, mins, maxes);
      }
    }
  }

  for (int i = size-6; i>=0 ;i--) {
    for (int j = 1; j <= 5; j++) {
      solve_min(size, input, i, j, mins, maxes);
      solve_max(size, input, i, j, mins, maxes);
    }
  }
  return maxes[0][5];
}

void solve_max(int size, int input[], int index, int avail, ll mins[][6], ll maxes[][6]) {
  if (input[index] < 0) {
    maxes[index][avail] = max(maxes[index+1][avail], input[index]*mins[index+1][avail-1]);
  } else {
    maxes[index][avail] = max(maxes[index+1][avail], input[index]*maxes[index+1][avail-1]);
  }
}

void solve_min(int size, int input[], int index, int avail, ll mins[][6], ll maxes[][6]) {
  if (input[index] < 0) {
    mins[index][avail] = min(mins[index+1][avail], input[index]*maxes[index+1][avail-1]);
  } else {
    mins[index][avail] = min(mins[index+1][avail], input[index]*mins[index+1][avail-1]);
  }
}

int main() {
  int tests;
  cin >> tests;

  ll answers[tests];
  for (int i = 0; i < tests; i++) {
    int len;
    cin >> len;
    int input[len];
    for (int j = 0; j < len; j++) {
      cin >> input[j];
    }
    answers[i] = solve(len, input);
  }

  for (int i = 0; i < tests; i++) {
    cout << answers[i] << "\n";
  }
  
  return 0;
}
