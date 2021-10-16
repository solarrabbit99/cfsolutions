#include <bits/stdc++.h>

using namespace std;

bool solve(int N, int A[]) {
  int n=0;
  int m=N-1;
  
  while(A[n+1] > A[n] && n<N-1){
    n++;
  }
  while(A[m-1] > A[m] && m>0){
    m--;
  }
  return ((n+1)&1)+((N-m)&1) > 0;
}

int main(){
  int N;
  cin >> N;
  int A[N];
  for (int i=0; i<N; i++){
    cin >> A[i];
  }
  bool isAlice = solve(N, A);
  if(isAlice){
    cout << "Alice" << "\n";
  } else {
    cout << "Bob" << "\n";
  }
  return 0;
}
