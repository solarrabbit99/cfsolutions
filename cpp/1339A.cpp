#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  int ans[t];
  for(int i=0; i<t; i++){
    int input;
    cin >> input;
    ans[i] = input;
  }

  for(int i=0; i<t; i++){
    cout << ans[i] << "\n";
  }
  return 0;
}
