#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<string> ss = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

  string s;
  cin >> s;

  cout << (ss.contains(s) ? "Yes" : "No") << endl;

  return 0;
}