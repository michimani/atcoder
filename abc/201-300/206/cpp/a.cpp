#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;
  n *= 108;

  const ui t = 206;

  if (n / 100 < t)
  {
    cout << "Yay!" << endl;
  }
  else if (n / 100 == t)
  {
    cout << "so-so" << endl;
  }
  else
  {
    cout << ":(" << endl;
  }

  return 0;
}