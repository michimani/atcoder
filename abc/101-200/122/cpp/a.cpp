#include <iostream>
#include <map>

using namespace std;

int main()
{
  char b;
  cin >> b;

  map<char, char> e = {
      {'A', 'T'},
      {'T', 'A'},
      {'C', 'G'},
      {'G', 'C'}};

  cout << e[b] << endl;

  return 0;
}