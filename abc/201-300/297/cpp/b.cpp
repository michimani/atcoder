#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  map<char, vector<unsigned int>> c_ord;
  for (unsigned int i = 0; i < 8; i++)
  {
    char c;
    cin >> c;
    c_ord[c].push_back(i + 1);
  }

  if ((c_ord['B'][0] % 2 == 0 && c_ord['B'][1] % 2 == 0) ||
      (c_ord['B'][0] % 2 != 0 && c_ord['B'][1] % 2 != 0))
  {
    cout << "No" << endl;
    return 0;
  }

  if (c_ord['K'][0] < c_ord['R'][0] || c_ord['R'][1] < c_ord['K'][0])
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}