#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m ,c, mw= 0;
  cin >> n;
  while (n--) {
    cin >> m >> c;
    if (m>c) {
      mw++;
    } else if (m<c) {
      mw--;
    }
  }
  if (mw>0) {
    cout << "Mishka\n";
  } else if (mw == 0) {
    cout << "Friendship is magic!^^\n";
  } else {
    cout << "Chris\n";
  }
