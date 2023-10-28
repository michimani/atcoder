#include <iostream>

using namespace std;

bool is_326(string n)
{
  return (n[0] - '0') * (n[1] - '0') == (n[2] - '0');
}

int main()
{
  int n;
  cin >> n;

  while (n <= 919)
  {
    if (is_326(to_string(n)))
    {
      cout << n << endl;
      return 0;
    }

    n++;
  }

  cout << 0 << endl;
  return 0;
}