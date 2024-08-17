#include <iostream>

using namespace std;

int main()
{
  int n, t, a;
  cin >> n >> t >> a;

  cout << (abs(t - a) > n - (t + a) ? "Yes" : "No") << endl;

  return 0;
}