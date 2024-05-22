#include <iostream>

using namespace std;
using ui = unsigned int;

bool is_palindrome(ui n)
{
  string str = to_string(n);

  if (str.size() < 2)
    return true;

  ui mid = str.size() / 2;
  ui f = mid - 1, b = mid + str.size() % 2;
  ui i = 0, j = 1;
  while (i < j && i < mid)
  {
    j = str.size() - i - 1;

    if (str[i] != str[j] || str[f - i] != str[b + i])
      return false;

    i++;
  }

  return true;
}

int main()
{
  ui a, b;
  cin >> a >> b;

  ui ans = 0;
  for (ui i = a; i <= b; i++)
    ans += is_palindrome(i);

  cout << ans << endl;

  return 0;
}