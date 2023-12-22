#include <iostream>

using namespace std;

int main()
{
  unsigned int n, s, d;
  cin >> n >> s >> d;

  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int x, y;
    cin >> x >> y;

    if (x < s && y > d)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}