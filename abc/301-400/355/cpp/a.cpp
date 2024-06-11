#include <iostream>
#include <set>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  set<int> h = {1, 2, 3};
  h.erase(a);
  h.erase(b);

  cout << (h.size() == 1 ? *h.begin() : -1) << endl;

  return 0;
}