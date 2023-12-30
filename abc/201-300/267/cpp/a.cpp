#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<string, ui> w = {
      {"Monday", 5}, {"Tuesday", 4}, {"Wednesday", 3}, {"Thursday", 2}, {"Friday", 1}};

  string s;
  cin >> s;

  cout << w[s] << endl;
  return 0;
}