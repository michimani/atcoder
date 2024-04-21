#include <iostream>

using namespace std;

int main()
{
  string x;
  cin >> x;

  for (auto c : x)
  {
    if (c == '.')
      break;
    cout << c;
  }

  cout << endl;
  return 0;
}