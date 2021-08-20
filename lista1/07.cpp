#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i, rounds;
  vector<int> players;
  cin >> n;
  while (cin >> i) {
    players.push_back(i);
  }

  sort(players.begin(), players.end());
  int s = players.size();
  rounds = players[s-1];
  rounds++;
  cout << rounds;
}