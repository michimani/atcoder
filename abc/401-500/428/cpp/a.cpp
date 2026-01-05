#include <iostream>

using namespace std;

int main()
{
  int s, a, b, x;
  cin >> s >> a >> b >> x;

  int aa = a, bb = b;
  int t = 0;
  while (x > 0)
  {
    if (aa > 0)
    {
      aa--;
      t += s;
      if (aa == 0)
        bb = b;
    }
    else if (bb > 0)
    {
      bb--;
      if (bb == 0)
        aa = a;
    }

    x--;
  }

  cout << t << endl;

  return 0;
}