#include <iostream>

using namespace std;

int solve(int N, char O[], char E[]){
  bool over[N];
  for(int i=0; i<N; i++) {
    over[i] = false;
  }

  for (int i=0; i<N; i++) {
    if(E[i]=='0' && O[i]=='1') {
      over[i] = true;
    } else if (E[i]=='1') {
      if (i>0 && O[i-1]=='1' && !over[i-1]) {
        over[i-1] = true;
      } else if (i<N-1 && O[i+1]=='1') {
        over[i+1] = true;
      }
    }
  }

  int count = 0;
  for(int i=0; i<N; i++) {
    if(over[i])
      count++;
  }

  return count;
}

int main(){
  int n;
  cin >> n;
  int ans[n];
  for (int i=0; i<n; i++) {
    int s;
    cin >> s;
    char E[s];
    for(int j=0; j<s; j++) {
      cin >> E[j];
    }
    char O[s];
    for(int j=0; j<s; j++) {
      cin >> O[j];
    }
    ans[i] = solve(s, O, E);
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
}
