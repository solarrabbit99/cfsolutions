#include <iostream>

using namespace std;

int gcd(int u, int v) {
  while (v != 0) {
    int r = u % v;
    u = v;
    v = r;
  }
  return u;
}

int solve(int N, int A[]) {
  int target = A[0];
  bool need = false;
  for (int i=1;i< N;i++) {
    if (A[i] != target) {
      need = true;
      break;
    }
  }
  if (!need){
    return -1;
  }
  int k = abs(A[1] - A[0]);
  for (int i =1; i<N-1; i++) {
    int diff = abs(A[i+1] - A[i]);
    k = gcd(k, diff);
  }
  return k;
}

int main(){
  int tests;
  cin >> tests;
  int ans[tests];
  for (int i=0; i<tests; i++){
    int N;
    cin >> N;
    int arr[N];
    for (int j=0; j<N; j++){
      cin >> arr[j];
    }
    ans[i] = solve(N, arr);
  }
  for (int i=0; i<tests; i++){
    cout << ans[i] << "\n";
  }
  return 0;
}
