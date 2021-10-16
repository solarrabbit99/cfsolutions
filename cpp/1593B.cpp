#include <iostream>

using namespace std;

typedef long long ll;

int solve(ll input) {
  ll check = input;
  bool hasFive = false;
  bool hasZero = false;
  int index = 0;
  while (check>0) {
    int rem = check%10;
    if (((rem==0||rem==5) && hasZero) || ((rem==2||rem==7) && hasFive)) {
      break;
    } else if (rem == 0) {
      hasZero = true;
    } else if (rem == 5) {
      hasFive = true;
    }
    index++;
    check /= 10;
  }
  return index - 1;
}

int main() {
  int tests;
  cin >> tests;
  int ans[tests];
  for (int i=0; i<tests; i++) {
    ll input;
    cin >> input;
    ans[i] = solve(input);
  }
  for (int i=0; i<tests; i++) {
    cout << ans[i] << "\n";
  }
  return 0;
}
