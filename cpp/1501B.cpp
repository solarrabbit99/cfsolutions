#include <iostream>
#include <string>

using namespace std;

string solve(int N, int A[]) {
  int current = 0;
  int dren[N];
  for (int i = N-1; i >= 0; i--) {
    if(A[i] > current) {
      current = A[i];
    }
    if (current > 0) {
      dren[i] = 1;
    } else {
      dren[i] = 0;
    }
    current--;
  }

  string result = "";
  for (int i = 0; i < N - 1; i++) {
    result += to_string(dren[i]) + " ";
  }

  result += to_string(dren[N-1]);
  return result;
}

int main() {
  int n;
  cin >> n;

  string ans[n];
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    int arr[s];
    for (int j = 0; j < s; j++) {
      cin >> arr[j];
    }
    ans[i] = solve(s, arr);
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << "\n";
  }
}
