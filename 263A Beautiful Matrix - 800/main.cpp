#include <iostream>

using namespace std;

int main() {
  int row = 1, col = 1;
  int n;
  while (cin >> n) {
    if (n == 1) {
      cout << (abs(3 - row) + abs(3 - col)) << endl;
      break;
    }
    if (col == 5) {
      row++;
      col = 1;
    } else {
      col++;
    }
  }
  return 0;
}
