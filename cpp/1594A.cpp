#include <iostream>

using namespace std;
typedef long long ll;

void solve(ll input, ll answer[]) {
  answer[0] = 1 - input;
  answer[1] = input;
}

int main() {
  int number;
  cin >> number;

  ll answers[number][2];
  for (int i = 0; i < number; i++) {
    ll input;
    cin >> input;
    ll answer[2];
    solve(input, answer);

    answers[i][0] = answer[0];
    answers[i][1] = answer[1];
  }

  for (int i = 0; i < number; i++) {
    cout << answers[i][0] << " " << answers[i][1] << "\n";
  }
  return 0;
}
