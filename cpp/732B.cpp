#include <iostream>

using namespace std;

int solve(int N, int k, int A[], int result[]){
  result[0] = A[0];
  int addition = 0;
  for (int i=1; i<N; i++){
    int extra = max(0, k-A[i]-result[i-1]);
    result[i] = A[i] + extra;
    addition += extra;
  }
  return addition;
}

int main(){
  int f, s;
  cin >> f >> s;
  int arr[f];
  for (int i=0; i<f; i++){
    cin >> arr[i];
  }
  int ans[f];
  int minim = solve(f, s, arr, ans);
  cout << minim << "\n";
  for (int i=0; i<f-1;i++){
    cout << ans[i] << " ";
  }
  cout << ans[f-1] << "\n";
  return 0;
}
