#include <iostream>

using namespace std;

void solve(int input) {
  int acc = 0;
  int i = 1;
  while(acc+i <= input){
    acc += i;
    i++;
  }
  cout << i - 1 << "\n";
  for (int j=1; j<i-1; j++){
    cout << j << " ";
  }
  cout << i-1+(input-acc) << "\n";
}

int main(){
  int input;
  cin >> input;
  solve(input);
  return 0;
}
