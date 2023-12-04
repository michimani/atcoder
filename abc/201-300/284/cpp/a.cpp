#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;
  vector<string> ss(n);
  for (auto &s : ss)
  {
    cin >> s;
  }

  reverse(ss.begin(), ss.end());

  for (auto &s : ss)
  {
    cout << s << endl;
  }

  return 0;
}