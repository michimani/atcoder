#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> ab(2, 0);
  bool c;
  cin >> ab[0] >> ab[1] >> c;

  while (true)
  {
    if (ab[(unsigned int)(c)] == 0)
    {
      break;
    }

    ab[(unsigned int)(c)]--;
    c = !c;
  }

  if (c)
  {
    cout << "Takahashi" << endl;
  }
  else
  {
    cout << "Aoki" << endl;
  }

  return 0;
}