#include <iostream>

using namespace std;

int solve(int n, int k, int A[]){
  int mark = A[k-1];
  if (mark == 0){
    int i = 0;
    while(A[i] > 0) {
      i++;
    }
    return i;
  }

  int i = 0;
  while(A[k+i] == mark && k+i<n){
    i++;
  }

  return i+k;
}

int main(){
  int f, s;
  cin >> f >> s;
  int arr[f];
  for (int i=0; i<f; i++){
    cin >> arr[i];
  }
  cout << solve(f, s, arr) << "\n";
  return 0;
}
