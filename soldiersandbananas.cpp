#include <bits/stdc++>
using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;
  int hp = w*(w+1)/2*k;
  if (hp<=n) {
    cout << "0\n";
  } else {
    cout << hp - n << "\n";
  }
}
