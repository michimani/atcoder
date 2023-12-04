#include <iostream>

using namespace std;

int main()
{
  unsigned int t;
  cin >> t;
  for (unsigned int i = 0; i < t; i++)
  {
    unsigned int n;
    cin >> n;

    unsigned int odd = 0;
    for (unsigned int j = 0; j < n; j++)
    {
      unsigned int a;
      cin >> a;
      odd += int(a % 2 == 1);
    }

    cout << odd << endl;
  }

  return 0;
}