#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  vector<bool> T(3, false), A(3, false);
  vector<ui> v = {1, 2, 4};
  for (ui i = 0; i < 3; i++)
  {
    if (a >= v[2 - i])
    {
      T[2 - i] = true;
      a -= v[2 - i];
    }
    if (b >= v[2 - i])
    {
      A[2 - i] = true;
      b -= v[2 - i];
    }
  }

  ui s = 0;
  for (ui i = 0; i < 3; i++)
    s += v[i] * ui(T[i] || A[i]);

  cout << s << endl;

  return 0;
}