#include <iostream>

using namespace std;

int solve(int n, int A[], int m, int B[]){
  int f_max = 0;
  int f_acc = 0;
  for (int i=0; i<n; i++){
    f_acc += A[i];
    f_max = max(f_acc, f_max);
  }

  int s_max = 0;
  int s_acc = 0;
  for (int i=0; i<m; i++){
    s_acc += B[i];
    s_max = max(s_acc, s_max);
  }
  return f_max + s_max;
}

int main(){
  int tests;
  cin >> tests;
  int ans[tests];
  for (int i=0; i<tests; i++){
    int n;
    cin >> n;
    int A[n];
    for (int j=0; j<n; j++){
      cin >> A[j];
    }
    int m;
    cin >> m;
    int B[m];
    for (int j=0; j<m; j++){
      cin >> B[j];
    }
    ans[i] = solve(n, A, m, B);
  }
  for (int i=0; i<tests; i++){
    cout << ans[i] << "\n";
  }
}
