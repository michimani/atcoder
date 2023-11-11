#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n, q;
  cin >> n >> q;

  vector<unsigned int> same_total(n, 0);
  unsigned int same = 0;
  char prev = '_';
  for (unsigned int i = 0; i < n; i++)
  {
    char c = '_';
    cin >> c;
    if (prev == c)
    {
      same++;
    }
    same_total[i] = same;
    prev = c;
  }

  for (unsigned int i = 0; i < q; i++)
  {
    unsigned int l, r;
    cin >> l >> r;

    cout << same_total[r - 1] - same_total[l - 1] << endl;
  }
}