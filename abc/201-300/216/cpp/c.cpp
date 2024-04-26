#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  string m = "";
  while (n > 0)
  {
    if (n % 2 == 0)
    {
      n /= 2;
      m += "B";
    }
    else
    {
      n -= 1;
      m += "A";
    }
  }

  for (ui i = 1; i <= m.length(); i++)
    cout << m[m.length() - i];
  cout << endl;

  return 0;
}