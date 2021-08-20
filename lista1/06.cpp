#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i, i2;
  int count = 0;
  vector<int> p1, p2;
  cin >> n;
  while(cin>>i){
    p1.push_back(i);
  }
  while(cin>>i2){
    p2.push_back(i2);
  }

  while(count<p1.size()){
    cout << p1[count];
    count++;
  }
  
}