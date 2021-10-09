#include <iostream>

using namespace std;

int solve(int size, int input[]) {
  int minim = 0;
  int maxim = 0;
  for (int i = 1; i < size; i++) {
    if (input[i] < input[minim]) {
      minim = i;
    }
    if (input[i] > input[maxim]) {
      maxim = i;
    }
  }

  int half = size/2;
  if (minim < half && maxim < half) {
    return max(minim, maxim) + 1;
  }
  if (minim > half && maxim > half) {
    return size - min(minim, maxim);
  }

  int first = min(minim, maxim);
  int third = size - max(minim, maxim) - 1;
  int second = size - 2 - first - third;
  int remaining = max(max(first, second), third);
  return size - remaining;
}

int main() {
  int numOfCases;
  cin >> numOfCases;
  
  int answers[numOfCases];
  for (int i = 0; i < numOfCases; i++) {
    int inputLen;
    cin >> inputLen;
    int input[inputLen];
    for (int j = 0; j < inputLen; j++) {
      cin >> input[j];
    }
    answers[i] = solve(inputLen, input);
  }

  for (int i = 0; i < numOfCases; i++) {
    cout << answers[i] << "\n";
  }
}
