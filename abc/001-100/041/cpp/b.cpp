#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ull = unsigned long long;

int main()
{
  const ull d = 1000000007;

  vector<ull> abc(3, 0);
  for (auto &x : abc)
    cin >> x;
  sort(abc.rbegin(), abc.rend());

  cout << (((abc[0] * abc[1]) % d) * abc[2]) % d << endl;
  return 0;
}