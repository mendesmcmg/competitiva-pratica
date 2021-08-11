#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int ccount = 0;
  bool flag = true;

  cin >> s;

  if (s[0] != 'A') {
    flag = false;
  }

  if (s[s.length() - 1] == 'C') {
    flag = false;
  }

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'C' && (i >= 2 && i <= s.length() - 2)) {
      ccount++;
    }
    if (i > 0 && s[i] != 'C') {
      if (s[i] >= 'A' && s[i] <= 'Z') {
        flag = false;
      }
    }
  }

  if (ccount != 1) {
    flag = false;
  }
  
  if (flag == true) {
    cout << "AC" << endl;
  } else {
    cout << "WA" << endl;
  }
}