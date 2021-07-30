#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, n, resp;
  cin >> d >> n;
  if (d == 0) {
    resp = n;
    if (n == 100) {
      resp = 101;
    }
  } else {
    if (d == 1) {
      resp = n * 100;
      if (n == 100) {
        resp = 10100;
      }
    } else {
      if (d == 2) {
        resp = n * 10000;
        if (n == 100) {
          resp = 1010000;
        }
      }
    }
  }
  cout << resp;
}