#include <iostream>

using namespace std;
using ui = unsigned int;

void gen(ui &n, string s)
{
  if (s.size() == n)
  {
    cout << s << endl;
    return;
  }

  gen(n, s + 'a');
  gen(n, s + 'b');
  gen(n, s + 'c');
}

int main()
{
  ui n;
  cin >> n;

  gen(n, "a");
  gen(n, "b");
  gen(n, "c");

  return 0;
}