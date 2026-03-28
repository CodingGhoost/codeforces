#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  int res = 0;
  while (n) {
    string s;
    cin >> s;
    if (s[0] == '+' || s[1] == '+') {
      res++;
    } else {
      res--;
    }
    n--;
  }
  cout << res << endl;
  return 0;
}