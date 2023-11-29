#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n >= 42)
  {
    n++;
  }

  cout << "AGC";

  for (unsigned int i = 0; i < 3 - to_string(n).size(); i++)
  {
    cout << "0";
  }

  cout << n << endl;

  return 0;
}