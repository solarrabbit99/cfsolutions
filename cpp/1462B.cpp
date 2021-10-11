#include <iostream>

using namespace std;

bool solve(int N, char s[]) {
  if (N < 4) {
    return false;
  }
  char goal[] = "2020";

  int index = 0;
  while (index < 4) {
    if (s[index] != goal[index]) {
      break;
    }
    index++;
  }

  while (index < 4) {
    if (s[index+N-4] != goal[index]) {
      break;
    }
    index++;
  }

  return index == 4;
}

int main() {
  int n;
  cin >> n;
  bool ans[n];
  for (int i=0; i<n; i++) {
    int s;
    cin >> s;
    char input[s];
    for (int j=0; j<s; j++) {
      cin >> input[j];
    }
    ans[i] = solve(s, input);
  }

  for (int i=0; i<n; i++) {
    if (ans[i]) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
  return 0;
}
