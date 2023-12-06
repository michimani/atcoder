#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
  map<char, int> c;
  vector<char> cv(4, '.');
  for (unsigned int i = 0; i < 4; i++)
  {
    cin >> cv[i];
    c[cv[i]]++;
  }

  if (c.size() != 2)
  {
    cout << "No" << endl;
    return 0;
  }

  if (c[cv[0]] != 2)
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}