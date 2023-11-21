#include <iostream>

using namespace std;

int main()
{
  string n;
  cin >> n;

  unsigned int sum = 0;
  for (auto &d : n)
  {
    sum += d - '0';
  }

  if (sum % 9 == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}