#include <iostream>

using namespace std;
typedef long long ll;


ll solve(int N, int A[]) {
  ll count = 0;
  int negs = 0;
  int zeros = 0;

  for (int i = 0; i < N; i++) {
    if (A[i] == 0) {
      count++;
      zeros++;
    } else if (A[i] < 0) {
      count += -1 - A[i];
      negs++;
    } else {
      count += A[i] - 1;
    }
  }

  if (negs%2 == 1 && zeros == 0) {
    count +=2;
  }

  return count;
}

int main() {
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << solve(size, arr) << "\n";

  return 0;
}
