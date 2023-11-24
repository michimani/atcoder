#include <iostream>

using namespace std;

int main()
{
  unsigned int h, w;
  cin >> h >> w;

  for (unsigned int i = 0; i < h; i++)
  {
    string same(w, '.');
    for (unsigned int j = 0; j < w; j++)
    {
      cin >> same[j];
      cout << same[j];
    }

    cout << endl;
    cout << same << endl;
  }

  return 0;
}