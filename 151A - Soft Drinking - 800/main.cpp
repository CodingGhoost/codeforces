#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int totalByML = k * l / nl;
  int totalBySlices = c * d;
  int totalBySalt = p / np;

  cout << min(totalByML, min(totalBySlices, totalBySalt)) / n << endl;
  return 0;
}