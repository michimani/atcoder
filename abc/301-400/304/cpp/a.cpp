#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<string> nv(n);
  ui mnidx = 0;
  ui mna = 1000000001;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> nv[i] >> a;
    if (a < mna)
    {
      mna = a;
      mnidx = i;
    }
  }

  for (ui i = 0; i < n; i++)
    cout << nv[(mnidx + i) % n] << endl;

  return 0;
}