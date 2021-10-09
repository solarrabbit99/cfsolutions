#include <iostream>

using namespace std;

bool solve(int size, int arr[]) {
  int ones = 0;
  int twos = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 1) {
      ones++;
    } else {
      twos++;
    }
  }

  return ones%2 != 1 && (ones != 0 || twos%2 != 1);
}

int main() {
  int tests;
  cin >> tests;
  bool answers[tests];
  for (int i = 0; i < tests; i++) {
    int size;
    cin >> size;
    int arr[size];
    for (int j = 0; j < size; j++) {
      cin >> arr[j];
    }
    answers[i] = solve(size, arr);
  }

  for (int i = 0; i < tests; i++) {
    if (answers[i]) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
