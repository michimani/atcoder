#include <iostream>

using namespace std;

int main()
{
  int n, a, b;
  cin >> n >> a >> b;

  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    string nstr = to_string(i);
    int sum = 0;
    for (char c : nstr)
    {
      sum += c - '0';
    }

    if (a <= sum && sum <= b)
    {
      ans += i;
    }
  }

  cout << ans << endl;
  return 0;
}