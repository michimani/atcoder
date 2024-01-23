#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string s;
  cin >> s;

  vector<char> S;
  for (auto k : s)
  {
    switch (k)
    {
    case '0':
    case '1':
      S.push_back(k);
      break;
    case 'B':
      if (S.size() > 0)
      {
        S.pop_back();
      }
      break;

    default:
      // noop
      break;
    }
  }

  for (auto c : S)
  {
    cout << c;
  }
  cout << endl;

  return 0;
}