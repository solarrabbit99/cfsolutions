#include <iostream>

long long solve(int N, int A[], int B[]) {
  long long original = 0;
  for (int i = 0; i < N; i++) {
    original += (long long) A[i]*B[i];
  }
  long long max = original;

  // odds
  for (int i = 1; i < N; i++) {
    int cut = std::min(i, N - 1 - i);
    long long dup = original;
    for (int j = 1; j <= cut; j++) {
      dup += 0 - (long long)A[i-j]*B[i-j] - (long long)A[i+j]*B[i+j] + (long long)A[i-j]*B[i+j] + (long long)A[i+j]*B[i-j];
      max = std::max(dup, max);
    }
  }

  // evens
  for (int i = 0; i < N - 1; i++) {
    int cut = std::min(i + 1, N - 1 - i);
    long long dup = original;
    for (int j = 1; j <= cut; j++) {
      dup += 0 - (long long)A[i-j+1]*B[i-j+1] - (long long)A[i+j]*B[i+j] + (long long)A[i-j+1]*B[i+j] + (long long)A[i+j]*B[i-j+1];
      max = std::max(dup, max);
    }
  }

  return max;
}

int main() {
  int N;
  std::cin >> N;

  int A[N], B[N];
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    std::cin >> B[i];
  }

  std::cout << solve(N, A, B) << "\n";
  return 0;
}
