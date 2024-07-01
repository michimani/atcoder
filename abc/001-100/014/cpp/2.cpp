#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, x;
  cin >> n >> x;

  string z = bitset<32>(x).to_string();
  reverse(z.begin(), z.end());

  ui ans = 0;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;

    ans += a * ui(z[i] == '1');
  }

  cout << ans << endl;

  return 0;
}