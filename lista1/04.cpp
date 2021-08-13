#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  string space = " ";
  int index;

  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    index = s.find("WUB");
    if (index == 0 || s[index - 1] == ' ') {
      s.erase(index, 3);
    } else if (index != 0 && index < s.length() - 2) {
      s.replace(index, 3, space);
    }
    if (index == -1)
      break;
  }

 if (s.length()-1 == ' '){
   s.erase(s.end());
 }

  cout << s << endl;

  return 0;
}