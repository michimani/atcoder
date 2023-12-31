#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  long double n;
  cin >> n;

  const long double s = pow(2, 31);
  if (-s <= n && n < s)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}