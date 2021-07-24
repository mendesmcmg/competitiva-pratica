#include <bits/stdc++.h>

int main() {
  int n, points = 0;
  float x, y, d, distance;
  std::cin >> n >> d;
  for (int i=0; i< n; i++) {
    std::cin >> x >> y;
    distance = sqrt(pow(x, 2) + pow(y, 2));   
    if (distance <= d){
      points ++;
    }
  }
  std::cout << points;
}