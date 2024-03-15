#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull k;
  string a, b;
  cin >> k >> a >> b;

  ull aa = 0, bb = 0;
  for (ui i = 0; i < a.length(); i++)
    aa += pow(k, ull(i)) * (a[a.length() - 1 - i] - '0');

  for (ui i = 0; i < b.length(); i++)
    bb += pow(k, ull(i)) * (b[b.length() - 1 - i] - '0');

  cout << aa * bb << endl;
  return 0;
}