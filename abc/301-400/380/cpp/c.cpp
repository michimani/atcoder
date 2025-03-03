#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  vector<string> sv;
  vector<ui> o_idxs;
  char c;
  char p = 'x';
  string tmp = "";

  for (; n--;)
  {
    cin >> c;

    if (tmp == "" || c == p)
    {
      tmp += c;
    }
    else
    {
      if (c == '0')
      {
        o_idxs.push_back(sv.size());
      }
      sv.push_back(tmp);
      tmp = c;
    }

    p = c;
  }

  if (tmp[0] == '1')
  {
    o_idxs.push_back(sv.size());
  }
  sv.push_back(tmp);

  ui move_sv_idx = o_idxs[k - 1];
  ui tgt_sv_idx = o_idxs[k - 2];
  for (ui i = 0; i < sv.size(); i++)
  {
    if (i == move_sv_idx)
    {
      continue;
    }

    if (i == tgt_sv_idx)
    {
      cout << sv[move_sv_idx];
    }
    cout << sv[i];
  }
  cout << endl;

  return 0;
}