#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<string> s(n);
  ui t = 0;
  for (ui i = 0; i < n; i++)
  {
    cin >> s[i];
    ui c;
    cin >> c;
    t += c;
  }

  sort(s.begin(), s.end());

  cout << s[t % n] << endl;

  return 0;
}