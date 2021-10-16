#include <bits/stdc++.h>

using namespace std;

void solve(int l, int r, int arr[2]){
  int d = (l << 1);
  if (d > r) {
    arr[0] = arr[1] = -1;
  } else {
    arr[0] = l;
    arr[1] = d;
  }
}

int main(){
  int t;
  cin >> t;
  int ans[t][2];
  for (int i=0; i<t; i++){
    int l, r;
    cin >> l >> r;
    int f[2];
    solve(l, r, f);
    ans[i][0] = f[0];
    ans[i][1] = f[1];
  }
  for (int i=0; i<t; i++){
    cout << ans[i][0] << " " << ans[i][1] << "\n";
  }
  return 0;
}
