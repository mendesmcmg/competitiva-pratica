#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans=0, p1, p2, p3, num;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> p1 >> p2 >> p3;
    num = 0;
    if (p1 == 1) {
      num++;
    }
    if (p2 == 1) {
      num++;
    }
    if (p3 == 1) {
      num++;
    }
    if (num >= 2) {
      ans++;
    }
  }
  cout << ans;
}