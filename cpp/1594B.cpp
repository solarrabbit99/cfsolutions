#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
int M = 1000000007;

ll dpow(int k, int p){
  if (p==0){
    return 1;
  } else {
    return k*dpow(k,p-1)%M;
  }
}

int solve(int k, int n){
  int p = 0;
  int sum = 0;
  while(n != 0){
    sum = (sum + (n&1)*dpow(k, p))%M;
    n >>= 1;
    p++;
  }
  return sum;
}

int main(){
  int tests;
  cin >> tests;
  int ans[tests];
  for (int i=0; i<tests; i++){
    int x, y;
    cin >> x >> y;
    ans[i] = solve(x, y);
  }
  for (int i=0; i<tests; i++){
    cout << ans[i] << "\n";
  }
  return 0;
}
