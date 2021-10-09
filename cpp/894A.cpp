#include <iostream>
#include <cstring>

using namespace std;

int solve(string str) {
  int N = str.length();
  char A[N];
  strcpy(A, str.c_str());

  int right = 0;
  for (int i = 0; i < N; i++) {
    if (A[i] == 'Q') {
      right++;
    }
  }

  int left = 0;
  int result = 0;
  for (int i = 0; i < N; i++) {
    if (A[i] == 'Q') {
      left++;
      right--;
      continue;
    }
    if (A[i] == 'A') {
      result += left * right;
    }
  }

  return result;
}

int main() {
  string input;
  cin >> input;
  cout << solve(input) << "\n";
  return 0;
}
