#include <iostream>

using namespace std;

bool is_321(int n)
{
  if (n < 10)
  {
    return true;
  }

  string n_str = to_string(n);
  char prev = '9' + 1;
  for (auto &c : n_str)
  {
    if (c >= prev)
    {
      return false;
    }

    prev = c;
  }

  return true;
}

int main()
{
  int n = 0;
  cin >> n;

  string ans = is_321(n) ? "Yes" : "No";
  cout << ans << endl;
}