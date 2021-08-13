#include <bits/stdc++.h>
using namespace std;

int main() {
  string str, ans = "";
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U' || str[i] == 'y' || str[i] == 'Y') {
    } else {
      ans = ans + ".";
      if(str[i]>='A' && str[i]<='Z'){
        int ascii;
        char lower;
        ascii = str[i];
        ascii = ascii+32;
        lower = ascii;
        ans = ans + lower;
      } else {
        ans = ans + str[i];
      }
    }
  }

  cout << ans;
}