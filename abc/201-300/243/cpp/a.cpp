#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<pair<char, ui>> x = {{'F', 0}, {'M', 0}, {'T', 0}};
  ui v;
  cin >> v >> x[0].second >> x[1].second >> x[2].second;

  ui i = 0;
  while (true)
  {
    if (v < x[i % 3].second)
    {
      cout << x[i % 3].first << endl;
      return 0;
    }

    v -= x[i % 3].second;
    i++;
  }

  return 0;
}