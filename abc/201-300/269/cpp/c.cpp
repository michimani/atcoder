#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

void gen(map<ui, bool> &exd, ui &mxd, ui d, string b, map<string, bool> &bits)
{
  if (d == mxd)
  {
    bits[b] = true;
    return;
  }

  gen(exd, mxd, d + 1, "0" + b, bits);
  if (!exd[d])
    gen(exd, mxd, d + 1, "1" + b, bits);

  return;
}

int main()
{
  ull n;
  cin >> n;

  map<ui, bool> exd;
  ui d = 0;
  while (n > 0)
  {
    if (n % 2 == 0)
      exd[d] = true;

    n /= 2;
    d++;
  }

  map<string, bool> bits;
  gen(exd, d, 0, "", bits);

  auto it = bits.begin();
  while (it != bits.end())
  {
    string b = it->first;
    ull num = 0;
    for (ui i = 1; i <= d; i++)
    {
      num += ull(pow(2, i - 1)) * ull(b[d - i] - '0');
    }
    cout << num << endl;
    it++;
  }

  return 0;
}