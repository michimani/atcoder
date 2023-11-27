#include <iostream>

using namespace std;

int main()
{
  int N = 0, M = 0;
  cin >> N >> M;

  int a, b, c;
  for (a = 0; a <= N; a++)
  {
    for (b = 0; b <= N - a; b++)
    {
      c = N - a - b;
      if (a * 2 + b * 3 + c * 4 == M)
      {
        cout << a << " " << b << " " << c << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
  return 0;
}