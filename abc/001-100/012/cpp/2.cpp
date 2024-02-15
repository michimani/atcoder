#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui h = n / (60 * 60);
  n -= 60 * 60 * h;

  ui m = n / 60;
  n -= 60 * m;

  ui s = n;

  cout << (h < 10 ? "0" : "") << h << ":"
       << (m < 10 ? "0" : "") << m << ":"
       << (s < 10 ? "0" : "") << s << endl;

  return 0;
}