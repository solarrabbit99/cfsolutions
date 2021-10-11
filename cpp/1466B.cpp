#include <iostream>

using namespace std;

int solve(int N, int A[]) {
  int freq[2*N+1];

  for (int i=0; i<=2*N; i++) {
    freq[i] = 0;
  }

  for (int i=0; i<N; i++) {
    int index = A[i]-1;
    if (freq[index] > 0) {
      freq[index+1]++;
    } else {
      freq[index]++;
    }
  }

  int r = 0;
  for (int i=0; i<=2*N; i++) {
    if (freq[i] > 0) {
      r++;
    }
  }
  
  return r;
}

int main() {
  int n;
  cin >> n;
  int ans[n];
  for (int i=0; i<n; i++) {
    int s;
    cin >> s;
    int arr[s];
    for (int j=0; j<s; j++) {
      cin >> arr[j];
    }

    ans[i] = solve(s, arr);
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
  return 0;
}
