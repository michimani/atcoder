#include <iostream>
#include <deque>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main()
{
  ui q;
  cin >> q;

  deque<pair<ull, ull>> A;

  ui a;
  ull b, c;
  for (; q--;)
  {
    cin >> a;

    if (a == 1)
    {
      cin >> b >> c;
      A.push_back({c, b});
    }
    else
    {
      // a == 2
      cin >> b;
      ull sum = 0;
      ull remaining = b;

      while (remaining > 0 && !A.empty())
      {
        ull take = min(remaining, A.front().second);
        sum += take * A.front().first;
        remaining -= take;
        A.front().second -= take;

        if (A.front().second == 0)
          A.pop_front();
      }

      cout << sum << endl;
    }
  }

  return 0;
}