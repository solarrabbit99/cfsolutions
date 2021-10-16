#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

#define MP make_pair
#define PI pair<int, int>
#define VPI vector<pair<int, int> >
#define MSI unordered_map<int, unordered_set<int> >

using namespace std;

int solve(PI* v, int n, int k){
  if (n == 1 && k >= 1) return 0;
  MSI msi;
  for (int i=0; i<n-1; i++){
    PI& p = v[i];
    msi[p.first].insert(p.second);
    msi[p.second].insert(p.first);
  }
  queue<int> q;
  for (auto& it: msi){
    if (it.second.size() == 1){
      q.push(it.first);
    }
  }
  int curr = q.size();
  while(!q.empty()){
    if (curr == 0) {
      curr = q.size() - 1;
      k--;
      if (k == 0) break;
    } else {
      curr--;
    }

    int i = q.front();
    q.pop();
    auto& set = msi.find(i)->second;
    for (int j: set){
      auto& adj_set = msi.find(j)->second;
      adj_set.erase(i);
      if (adj_set.size() == 1){
        q.push(j);
      }
    }
    n--;
    set.clear();
  }

  return n;
}

int main(){
  int t;
  cin >> t;
  int ans[t];
  
  string l;
  for (int i=0; i<t; i++){
    int n, k;
    cin >> n >> k;
    PI v[n-1];
    for (int j=0; j<n-1; j++){
      int a, b;
      cin >> a >> b;
      v[j] = MP(a, b);
    }
    ans[i] = solve(v, n, k);
  }

  for (int i=0; i<t; i++){
    cout << ans[i] << "\n";
  }

  return 0;
}
