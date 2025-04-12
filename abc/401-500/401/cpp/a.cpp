#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui s;
  cin >> s;

  if (s >= 200 && s <= 299)
    cout << "Success" << endl;
  else
    cout << "Failure" << endl;

  return 0;
}