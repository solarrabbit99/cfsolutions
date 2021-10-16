#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

string solve(string input, unordered_map<string, int>& f) {
  auto next = f.find(input);
  if (next == f.end()){
    f[input] = 1;
    return "OK";
  } else {
    int ind = next->second;
    while(f.count(input+to_string(ind)) != 0) {
      ind++;
    }
    f[input+to_string(ind)] = 1;
    f[input] = ind+1;
    return input+to_string(ind);
  }
}

int main(){
  int c;
  cin >> c;
  string ans[c];
  unordered_map<string, int> f;
  for (int i=0; i<c; i++){
    string input;
    cin >> input;
    ans[i] = solve(input, f);
  }
  for (int i=0; i<c; i++){
    cout << ans[i] << "\n";
  }
  return 0;
}
