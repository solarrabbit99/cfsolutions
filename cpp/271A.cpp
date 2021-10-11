#include <iostream>

using namespace std;

bool is_distinct(int y) {
  int arr[10] = {0};
  while(y!=0) {
  int index = y%10;
    if (arr[index] > 0) {
      return false;
    }
    arr[index]++;
    y /= 10;
  }
  return true;
}

int solve(int y) {
  y++;
  while(!is_distinct(y)) {
    y++;
  }
  return y;
}

int main(){
  int y;
  cin >> y;
  cout << solve(y) << "\n";
  return 0;
}
