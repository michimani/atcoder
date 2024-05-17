#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui ha, wa, hb, wb;
  cin >> ha >> wa >> hb >> wb;

  cout << (ha == hb || wa == wb || ha == wb || wa == hb ? "YES" : "NO") << endl;
  return 0;
}