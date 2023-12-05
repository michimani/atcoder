#include <iostream>

using namespace std;

int main()
{
  unsigned int n, a, b;
  cin >> n >> a >> b;

  unsigned int cc = a + b;
  for (unsigned int i = 1; i <= n; i++)
  {
    unsigned int c;
    cin >> c;
    if (c == cc)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}