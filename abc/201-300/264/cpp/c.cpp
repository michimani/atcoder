#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  unsigned int h1 = 0, w1 = 0;
  cin >> h1 >> w1;
  vector<int> a_row(w1, 0);
  vector<vector<int>> a(h1, a_row);
  for (auto &ar : a)
  {
    for (auto &ac : ar)
    {
      cin >> ac;
    }
  }

  unsigned int h2 = 0, w2 = 0;
  cin >> h2 >> w2;
  vector<int> b_row(w2, 0);
  vector<vector<int>> b(h2, b_row);
  for (auto &br : b)
  {
    for (auto &bc : br)
    {
      cin >> bc;
    }
  }

  // row
  map<unsigned int, bool> deleted_row;
  map<unsigned int, bool> collect_row;
  for (unsigned int ai = 0; ai < h1; ai++)
  {
    bool collect_a_row = false;
    for (unsigned int bi = 0; bi < h2; bi++)
    {
      if (collect_row.count(bi) != 0)
      {
        continue;
      }
      unsigned int bjv_count = 0;
      unsigned int bj = 0;
      unsigned int aj = 0;
      while (true)
      {
        if (bj == w2 || aj == w1)
        {
          break;
        }

        if (a[ai][aj] == b[bi][bj])
        {
          bjv_count++;
          bj++;
        }

        aj++;
      }
      if (bjv_count == w2)
      {
        collect_row[bi] = true;
        collect_a_row = true;
        break;
      }
    }
    if (!collect_a_row)
    {
      deleted_row[ai] = true;
    }
  }

  if (h1 - deleted_row.size() < h2)
  {
    cout << "No" << endl;
    return 0;
  }

  // column
  map<unsigned int, bool> deleted_column;
  map<unsigned int, bool> collect_column;
  for (unsigned int aj = 0; aj < w1; aj++)
  {
    bool collect_a_column = false;
    for (unsigned int bj = 0; bj < w2; bj++)
    {
      if (collect_column.count(bj) != 0)
      {
        continue;
      }
      unsigned int biv_count = 0;
      unsigned int bi = 0;
      unsigned int ai = 0;
      while (true)
      {
        if (deleted_row.count(ai) != 0)
        {
          ai++;
        }

        if (bi == h2 || ai == h1)
        {
          break;
        }

        if (a[ai][aj] == b[bi][bj])
        {
          biv_count++;
          bi++;
        }

        ai++;
      }
      if (biv_count == h2)
      {
        collect_column[bj] = true;
        collect_a_column = true;
        break;
      }
    }
    if (!collect_a_column)
    {
      deleted_column[aj] = true;
    }
  }

  if (w1 - deleted_column.size() < w2)
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}