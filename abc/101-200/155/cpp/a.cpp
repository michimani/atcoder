#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, bool> abc;
  for (int i = 0; i < 3; i++)
  {
    int x;
    cin >> x;
    abc[x] = true;
  }

  if (abc.size() == 2)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}