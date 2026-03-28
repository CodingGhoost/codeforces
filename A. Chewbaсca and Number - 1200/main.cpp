#include <iostream>
#include <string>

using namespace std;

int main() {
  string n;
  cin >> n;
  for (int i = 0; i < n.length(); i++) {
    if (i == 0 && n[i] >= '5' && n[i] < '9') {
      n[i] = '9' - n[i] + '0';
    } else if (i > 0 && n[i] >= '5' && n[i] <= '9') {
      n[i] = '9' - n[i] + '0';
    }
  }
  cout << n << endl;
  return 0;
}
