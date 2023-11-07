#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include <algorithm>

using namespace std;

bool comp_year(const tuple<unsigned int, unsigned int, unsigned int> &l, const tuple<unsigned int, unsigned int, unsigned int> &r)
{
  return get<0>(l) < get<0>(r);
}

string gen_code(const unsigned int &p, const unsigned int &idx)
{
  string code(12, '_');

  unsigned int i = 0;
  for (i = 0; i < 6 - to_string(p).length(); i++)
  {
    code[i] = '0';
  }

  for (auto &c : to_string(p))
  {
    code[i] = c;
    i++;
  }

  for (; i < 12 - to_string(idx).length(); i++)
  {
    code[i] = '0';
  }

  for (auto &c : to_string(idx))
  {
    code[i] = c;
    i++;
  }

  return code;
}

int main()
{
  unsigned int n, m;
  cin >> n >> m;

  vector<tuple<unsigned int, unsigned int, unsigned int>> y_i_list(m); // Y, i, P
  for (unsigned int i = 0; i < m; i++)
  {
    unsigned int p, y;
    cin >> p >> y;
    y_i_list[i] = {y, i, p};
  }

  sort(y_i_list.begin(), y_i_list.end(), comp_year);

  map<unsigned int, unsigned int> p_c;
  vector<string> codes(m, "");
  for (auto &yi : y_i_list)
  {
    if (p_c.count(get<2>(yi)) == 0)
    {
      p_c[get<2>(yi)] = 1;
    }
    else
    {
      p_c[get<2>(yi)]++;
    }

    codes[get<1>(yi)] = gen_code(get<2>(yi), p_c[get<2>(yi)]);
  }

  for (auto &c : codes)
  {
    cout << c << endl;
  }

  return 0;
}