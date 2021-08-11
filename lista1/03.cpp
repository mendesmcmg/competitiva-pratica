#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, answer;
  int n;

  cin >> n;

  vector<string> ans;

  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s.length() > 10) {
      answer = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
    } else {
      answer = s;
    }
    ans.push_back(answer);
  }

  for (string a : ans)
    cout << a << endl;
}