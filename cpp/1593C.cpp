#include <iostream>
#include <algorithm>

using namespace std;

int solve(int n, int m, int A[]){
  sort(A, A + m);
  int number = 0;
  int steps = n;
  for (int i=m-1; i >=0; i--) {
    if (n - A[i] < steps) {
      number++;
      steps -= n - A[i];
    } else {
      break;
    }
  }
  return number;
}

int main(){
  int tests;
  cin >> tests;
  int ans[tests];
  for (int i=0; i<tests; i++){
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int j=0; j<m; j++){
      cin >> arr[j];
    }
    ans[i] = solve(n, m, arr);
  }
  for (int i=0; i<tests; i++){
    cout << ans[i] << "\n";
  }
  return 0;
}
