#include <iostream>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  cout << ((a[0] == '#' && (a[0] == a[1] || a[0] == b[0])) ||
                   (b[0] == '#' && (b[0] == b[1] || b[0] == a[0])) ||
                   (a[1] == '#' && (a[0] == a[1] || a[1] == b[1])) ||
                   (b[1] == '#' && (b[0] == b[1] || b[1] == a[1]))
               ? "Yes"
               : "No")
       << endl;

  return 0;
}