#include <iostream>

using namespace std;

int main()
{
  unsigned int K;
  int G, M;
  cin >> K >> G >> M;

  int g = 0;
  int m = 0;

  for (unsigned int i = 0; i < K; i++)
  {
    if (g == G)
    {
      g = 0;
    }
    else if (m == 0)
    {
      m = M;
    }
    else
    {
      if (G - g <= m)
      {
        m -= (G - g);
        g = G;
      }
      else
      {
        g += m;
        m = 0;
      }
    }
  }

  cout << g << " " << m << endl;
  return 0;
}