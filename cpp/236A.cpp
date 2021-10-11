#include <iostream>
#include <cstring>

using namespace std;

bool solve(int N, char str[]) {
  bool chars[26] = {0};
  for (int i=0; i<N; i++) {
    int index = str[i] - 97;
    chars[index] = true;
  }

  int sum = 0;
  for (int i=0; i<26; i++) {
    if (chars[i]) {
      sum++;
    }
  }
  return sum%2 == 0;
}

int main() {
  string input;
  cin >> input;
  int len = input.length();
  char arr[len];
  strcpy(arr, input.c_str());
  bool o = solve(len, arr);
  if (o) {
    cout << "CHAT WITH HER!" << "\n";
  } else {
    cout << "IGNORE HIM!" << "\n";
  }
  return 0;
}
