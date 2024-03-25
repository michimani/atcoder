#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> A(n);
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;

    A[a - 1] = i + 1;
  }

  for (ui i = 0; i < n; i++)
  {
    if (i > 0)
      cout << " ";
    cout << A[i];
  }

  cout << endl;

  return 0;
}