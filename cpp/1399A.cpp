#include <iostream>

using namespace std;

bool solve(int N, int A[]){
  int fq[100] = {0};
  for (int i=0; i<N; i++) {
    fq[A[i]-1]++;
  }

  bool started = false;
  bool ended = false;
  for (int i=0; i<100; i++) {
    if(started && fq[i]==0) {
       ended = true;
    }
    if(fq[i] > 0 && ended) {
      return false;
    }
    if(fq[i] > 0) {
      started = true;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  bool ans[n];
  for(int i=0; i<n; i++) {
    int len;
    cin >> len;
    int arr[len];
    for(int j=0; j<len; j++) {
      cin >> arr[j];
    }
    ans[i] = solve(len, arr);
  }

  for(int i=0; i<n; i++) {
    if(ans[i]) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
