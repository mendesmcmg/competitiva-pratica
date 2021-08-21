#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0, div = 0, number = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    number = i;
    for (int j = 1; j <= number; j++) {
      if (number % j == 0) {
        div++;
      }
    }
    if ((div == 8) && (number % 2 != 0)) {
      ans++;
    }
    div = 0;
  }
  cout << ans;
}