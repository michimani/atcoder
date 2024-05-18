#include <iostream>

using namespace std;

int main()
{
  long a, b;
  char o;
  cin >> a >> o >> b;

  if (o == '+')
    cout << a + b << endl;
  else
    cout << a - b << endl;

  return 0;
}