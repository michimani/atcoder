#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n = 0;
  cin >> n;

  map<string, bool> s;
  for (int i = 0; i < n; i++)
  {
    string ins = "";
    cin >> ins;

    if (s.count(ins) == 0)
    {
      s[ins] = true;
    }
  }

  cout << s.size() << endl;
}