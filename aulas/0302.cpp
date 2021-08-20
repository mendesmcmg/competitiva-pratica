#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  vector<int> rowm, colm;
  vector<string> cols;

  cin >> h >> w;
  string matr[h], row;

  for (int i = 0; i < h; i++) {
    int j=0;
    cin >> row;
    matr[i] = row;

    if (row.find('#')== std::string::npos) {
      rowm.push_back(i);
      matr[i][j]= ' ';
    }
    for (j = 0; j < w; j++) {
      // cout << matr[j] << endl;
    }
    for (int h=0; h<rowm.size();h++){
      cout << rowm[h];
    }
  }
}