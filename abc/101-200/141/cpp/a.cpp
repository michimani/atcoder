#include <iostream>

using namespace std;

int main()
{
  string s = "";
  cin >> s;

  switch (s[0])
  {
  case 'S':
    cout << "Cloudy" << endl;
    break;

  case 'C':
    cout << "Rainy" << endl;
    break;

  default:
    cout << "Sunny" << endl;
    break;
  }
}