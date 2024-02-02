#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, ui> scm;
  for (ui i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    if (scm[s] == 0)
    {
      cout << s << endl;
    }
    else
    {
      cout << s << "(" << scm[s] << ")" << endl;
    }
    scm[s]++;
  }

  return 0;
}