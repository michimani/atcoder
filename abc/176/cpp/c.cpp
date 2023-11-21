#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  unsigned long ans = 0;
  unsigned long prev = 0;

  for (unsigned int i = 0; i < n; i++)
  {
    unsigned long a;
    cin >> a;

    if (a < prev)
    {
      ans += prev - a;
      continue;
    }

    prev = a;
  }

  cout << ans << endl;
  return 0;
}