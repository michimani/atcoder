#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n, k;
  cin >> n >> k;

  vector<string> names(k);
  for (auto &name : names)
  {
    cin >> name;
  }

  sort(names.begin(), names.end());

  for (auto &name : names)
  {
    cout << name << endl;
  }

  return 0;
}