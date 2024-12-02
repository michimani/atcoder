#include <iostream>
#include <map>

using namespace std;

using ui = unsigned int;

int main()
{
  map<char, bool> abc = {{'A', true}, {'B', true}, {'C', true}};
  char x;
  for (ui i = 0; i < 3; i++)
  {
    cin >> x;
    if (abc.count(x) == 0 || !abc[x])
    {
      cout << "No" << endl;
      return 0;
    }

    abc.erase(x);
  }

  cout << "Yes" << endl;
  return 0;
}