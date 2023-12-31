#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<vector<ui>> b(w, vector<ui>(h, 0));
  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      cin >> b[j][i];
    }
  }

  for (ui i = 0; i < w; i++)
  {
    for (ui j = 0; j < h; j++)
    {
      if (j > 0)
      {
        cout << " ";
      }
      cout << b[i][j];
    }
    cout << endl;
  }

  return 0;
}