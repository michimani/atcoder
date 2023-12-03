#include <iostream>
#include <map>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  map<char, bool> cc;
  for (unsigned int i = 1; i <= n; i++)
  {
    char c;
    cin >> c;
    cc[c] = true;
    if (cc.size() == 3)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}