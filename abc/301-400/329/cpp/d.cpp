#include <iostream>
#include <map>

using namespace std;

int main()
{
  unsigned int n, m;
  cin >> n >> m;

  unsigned int max_idx = 0;
  unsigned int max_vote = 0;
  map<unsigned int, unsigned int> idx_vote;

  for (unsigned int i = 0; i < m; i++)
  {
    unsigned int a;
    cin >> a;

    idx_vote[a]++;
    if (idx_vote[a] >= max_vote)
    {
      max_vote = idx_vote[a];
      if (idx_vote[a] == idx_vote[max_idx])
      {
        max_idx = min(a, max_idx);
      }
      else
      {
        max_idx = a;
      }
    }

    cout << max_idx << endl;
  }

  return 0;
}