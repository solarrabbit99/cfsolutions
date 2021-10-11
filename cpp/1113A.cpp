#include <iostream>

using namespace std;

int solve(int n, int v) {
  int last = n-v;
  if (last<1){
    return n-1;
  } else {
    return last*(last + 1)/2 + (v-1);
  }
}

int main(){
  int f, s;
  cin >> f >> s;
  cout << solve(f, s) << "\n";
  return 0;
}
