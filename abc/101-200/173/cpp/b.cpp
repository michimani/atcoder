#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, ui> j;
  for (; n--;)
  {
    string jd;
    cin >> jd;
    j[jd]++;
  }

  vector<string> jl = {"AC", "WA", "TLE", "RE"};
  for (auto &jj : jl)
    cout << jj << " x " << j[jj] << endl;

  return 0;
}