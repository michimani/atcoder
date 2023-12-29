#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  long a = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    long s;
    cin >> s;

    if (i > 0)
    {
      cout << " ";
    }

    cout << s - a;
    a += (s - a);
  }

  cout << endl;

  return 0;
}