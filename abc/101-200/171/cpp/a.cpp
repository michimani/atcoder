#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  char a;
  cin >> a;

  cout << (a < 'a' ? 'A' : 'a') << endl;

  return 0;
}