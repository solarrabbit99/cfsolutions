#include <iostream>

using namespace std;

int solve(int N, int A[]){
  int maxim = 0;
  int curr = 1;
  for (int i=1; i<N; i++) {
    if (A[i] < A[i-1]) {
      maxim = max(maxim, curr);
      curr = 1;
    } else {
      curr++;
    }
  }
  return max(maxim, curr);
}

int main(){
  int N;
  cin >> N;  
  int A[N];
  for (int i=0; i<N; i++){
    cin >> A[i];
  }
  cout << solve(N, A) << "\n";
  return 0;
}
