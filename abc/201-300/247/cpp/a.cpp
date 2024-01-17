#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  bitset<4> s;
  cin >> s;

  s >>= 1;
  cout << s << endl;
  return 0;
}