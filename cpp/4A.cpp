#include <bits/stdc++.h>

using namespace std;

string solve(string input){
  int len = input.length() - 2;
  if (len <= 8){
    return input;
  } else {
    return input[0] + to_string(len) + input[len+1];
  }
}

int main(){
  int t;
  cin >> t;
  string ans[t];
  for (int i=0; i<t; i++){
    string input;
    cin >> input;
    ans[i] = solve(input);
  }
  for (int i=0; i<t; i++){
    cout << ans[i] << "\n";
  }
  return 0;
}
