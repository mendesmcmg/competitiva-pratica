#include <bits/stdc++.h>
using namespace std;

int main() {
  string players, ans=" ";
  int danger = 1;
  cin >> players;

  for (int i = 0; i < players.length(); i++) {
    if (i != 0) {
      if (players[i] == players[i - 1]) {
        danger++;
        if (danger >= 7) {
          ans = "YES";
        }
      } else {
        danger = 1;
      }
    }
  }
  if (ans != "YES") {
    ans = "NO";
  }
  cout << ans << endl;
}