#include <iostream>

using namespace std;

void solve(int input[], int output[]) {
  int maxim = max(input[0], max(input[1], input[2]));
  int count = 0;
  for (int i=0;i<3; i++) {
    if (input[i] == maxim) {
      count++;
    }
  }
  bool multiMax = count > 1;

  for (int i= 0; i<3; i++) {
    if (input[i] == maxim && !multiMax) {
      output[i] = 0;
    } else if (input[i] == maxim) {
      output[i] = 1;
    } else {
      output[i] = maxim - input[i] + 1;
    }
  }
}

int main(){
  int tests;
  cin >> tests;
  int ans[tests][3];
  for (int i=0; i<tests; i++) {
    int input[3];
    cin >> input[0] >> input[1] >> input[2];
    int output[3];
    solve(input, output);
    ans[i][0] = output[0];
    ans[i][1] = output[1];
    ans[i][2] = output[2];
  }
  for (int i=0; i<tests; i++){
    cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << "\n";
  }
  return 0;
}
