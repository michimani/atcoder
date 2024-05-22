#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> g(3, "");
  for (auto &gg : g)
    cin >> gg;

  cout << g[0][0] << g[1][1] << g[2][2] << endl;

  return 0;
}