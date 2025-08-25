#include <iostream>
#include <map>

using namespace std;

int main()
{
  string s;
  cin >> s;

  map<string, string> c = {
      {"red", "SSS"},
      {"blue", "FFF"},
      {"green", "MMM"},
  };

  if (c.count(s) > 0)
    cout << c[s] << endl;
  else
    cout << "Unknown" << endl;

  return 0;
}