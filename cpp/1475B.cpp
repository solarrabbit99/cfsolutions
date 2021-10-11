#include <iostream>

using namespace std;

bool solve(int input) {
  int n = input/2020;
  int rem = input%2020;
  return rem<=n;
}

int main(){
  int N;
  cin >> N;
  bool ans[N];
  for (int i=0; i<N; i++){
    int input;
    cin >> input;
    ans[i] = solve(input);
  }

  for (int i=0; i<N; i++){
    if (ans[i]){
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
  return 0;
}
