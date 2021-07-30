#include <bits/stdc++.h>
using namespace std;

int main() {
  string frase;
  int num = 0;
  cin >> frase;
  for (int i = 0; i < frase.length(); i++) {
    if (frase[i] == '+') {
      num++;
    } else {
      num--;
    }
  }
  cout << num << endl;
  return 0;
}