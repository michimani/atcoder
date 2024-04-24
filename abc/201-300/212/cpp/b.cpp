#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  bool w1 = true;
  bool w2 = true;
  string x(4, '.');
  cin >> x[0];
  for (ui i = 1; i < 4; i++)
  {
    cin >> x[i];
    w1 = w1 && x[i] == x[i - 1];
    w2 = w2 && (x[i - 1] - '0' + 1) % 10 == x[i] - '0';
  }

  cout << (w1 || w2 ? "Weak" : "Strong") << endl;
  return 0;
}