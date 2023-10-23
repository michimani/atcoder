#include <iostream>

using namespace std;

int main()
{
  unsigned int h = 1, w = 2;
  cin >> h >> w;

  for (unsigned int i = 0; i < h; i++)
  {
    string s = "";
    cin >> s;
    unsigned int j = 0;
    while (j < w - 1)
    {
      if (s[j] == 'T' && s[j + 1] == 'T')
      {
        cout << "PC";
        j += 2;
        continue;
      }

      cout << s[j];
      j++;
    }

    if (j == w - 1)
    {
      cout << s[w - 1];
    }

    cout << endl;
  }

  return 0;
}