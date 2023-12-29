#include <iostream>

using namespace std;

int main()
{
  unsigned int n, k;
  cin >> n >> k;

  for (unsigned int i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if (k == 0)
    {
      cout << 'x';
      continue;
    }

    cout << c;
    k -= (unsigned int)(c == 'o');
  }

  cout << endl;
  return 0;
}