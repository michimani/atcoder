#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

int main()
{
  int N = 0;
  cin >> N;

  vector<unsigned long> A((unsigned long)(pow(2, double(N))), 0);
  map<unsigned long, int> score_user_map;
  int i = 0;
  for (auto &a : A)
  {
    cin >> a;
    score_user_map[a] = i + 1;
    i++;
  }

  while (A.size() > 2)
  {
    vector<unsigned long> a_tmp(A.size() / 2, 0);

    for (unsigned int j = 1; j <= A.size() / 2; j++)
    {
      a_tmp[j - 1] = max(A[2 * j - 1 - 1], A[2 * j - 1]);
    }

    A = a_tmp;
  }

  cout << score_user_map[min(A[0], A[1])] << endl;
}