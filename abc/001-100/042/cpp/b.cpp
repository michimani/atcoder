#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, l;
  cin >> n >> l;

  vector<string> ss(n, string('.', l));
  for (auto &s : ss)
    cin >> s;

  sort(ss.begin(), ss.end());

  for (auto &s : ss)
    cout << s;

  cout << endl;

  return 0;
}