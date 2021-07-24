#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int valor = 7;
  long long int k, count = 1;
  unordered_set<int> restos;

  cin >> k;

  while (true) {
    int r = valor % k;

    if (r == 0) {
      cout << count << endl;
      break;
    }

    if (restos.find(r) != restos.end()) {
      cout << -1 << endl;
      break;
    }

    restos.insert(r);
    count++;
    valor = r * 10 + 7;
  }
  return 0;
}