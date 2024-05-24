#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<char> h = {'2', '4', '5', '7', '9'};
  set<char> p = {'0', '1', '6', '8'};

  string n;
  cin >> n;

  char d = n[n.length() - 1];
  if (h.contains(d))
    cout << "hon" << endl;
  else if (p.contains(d))
    cout << "pon" << endl;
  else
    cout << "bon" << endl;

  return 0;
}