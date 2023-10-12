#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp_length(const string &lhs, const string &rhs)
{
  if (lhs.size() != rhs.size())
  {
    return lhs.size() < rhs.size();
  }

  for (unsigned int i = 0; i < lhs.size(); i++)
  {
    if (lhs[i] != rhs[i])
    {
      return lhs[i] < rhs[i];
    }
  }

  return true;
}

bool comp_value(const string &lhs, const string &rhs)
{
  for (unsigned int i = 0; i < min(lhs.size(), rhs.size()); i++)
  {
    if (lhs[i] != rhs[i])
    {
      return lhs[i] < rhs[i];
    }
  }

  return true;
}

int main()
{
  unsigned int N = 0;
  cin >> N;

  vector<string> A(N, "");
  for (auto &a : A)
  {
    cin >> a;
  }

  sort(A.rbegin(), A.rend(), comp_length);
  vector<string> A2 = {A[0], A[1], A[2]};
  if (A2[0].size() != A2[1].size() ||
      A2[1].size() != A2[2].size() ||
      A2[1].size() != A2[0].size())
  {
    sort(A2.rbegin(), A2.rend(), comp_value);
  }

  for (auto &a2 : A2)
  {
    cout << a2;
  }

  cout << endl;

  return 0;
}