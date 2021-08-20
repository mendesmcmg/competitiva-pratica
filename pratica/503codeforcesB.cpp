#include <bits/stdc++.h>
using namespace std;

const int MAX{1010};
bitset<MAX> found;

int last_stud(int pos, vector<int> adj) {
  if (found[pos]) {
    return pos;
  }
  found[pos] = true;
  return last_stud(adj[pos], adj);
}

vector<int> solve(int N, const vector<int> adj) {
  vector<int> ans(N + 1);
  for (int u = 1; u <= N; u++) {
    found.reset();
    ans[u] = last_stud(u, adj);
  }
  return ans;
}

int main() {
  int n, stud;
  vector<int> adj(MAX), ans;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> stud;
    adj[i] = stud;
  }
  ans = solve(n, adj);

  for (int j = 1; j <= n; j++) {
    cout << ans[j] << ' ';
  }
}
