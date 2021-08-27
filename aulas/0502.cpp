#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, s2;
  int bigi = 0, integ = 0, dif = 0, maxdif = 0;
  cin >> s;

  for (int i = 0; i <= s.length() - 3; i++) {
    if (i == 0) {
      s2 = s.substr(i, i + 3);
    } else {
      s2 = s.substr(i, 3);
    }
    integ = stoi(s2);

    if (integ >= bigi) {
      bigi = integ;
    }
    if (bigi >= 753) {
      maxdif = bigi - 753;
    } else {
      maxdif = 753 - bigi;
    }
    if (i==0){
      dif = maxdif;
    } else {
      if (maxdif < dif){
        dif = maxdif;
      }
    }
  }
  cout << dif << endl;
}

//8 out of 10