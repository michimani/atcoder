#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n = 0;
  cin >> n;

  map<int, bool> nummap;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    nummap[num] = true;
  }

  cout << nummap.size() << endl;
}
