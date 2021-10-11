#include <iostream>

using namespace std;

int solve(int f, int s) {
  while(s>0){
    if (f%10<s) {
      s -= f%10 +1;
      f /= 10;
    } else {
      f -= s;
      s = 0;
    }
  }
  return f;
}

int main(){
  int f, s;
  cin >> f >> s;
  cout << solve(f, s) << "\n";
  return 0;
}
