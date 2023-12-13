#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  for (unsigned int i = 0; i < n; i++)
  {
    long a, b;
    cin >> a >> b;

    cout << a + b << endl;
  }

  return 0;
}