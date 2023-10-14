#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  string A = "";
  string B = "";

  cin >> A >> B;
  vector<int> a_digits(A.size(), 0);
  for (unsigned int i = 0; i < A.size(); i++)
  {
    a_digits[A.size() - i - 1] = int(A[i]) - int('0');
  }
  vector<int> b_digits(3, 0);
  unsigned int bc = 0;
  for (auto &b : B)
  {
    if (b == '.')
    {
      continue;
    }
    b_digits[3 - bc - 1] = int(b) - int('0');
    bc++;
  }

  vector<int> digits(a_digits.size() + 3, 0);
  for (unsigned int bi = 0; bi < b_digits.size(); bi++)
  {
    if (b_digits[bi] == 0)
    {
      continue;
    }

    int add = 0;
    for (unsigned int ai = 0; ai < a_digits.size(); ai++)
    {
      int d = b_digits[bi] * a_digits[ai] + add;
      if (bi > 0)
      {
        d += digits[bi + ai];
      }
      add = 0;
      if (d >= 10)
      {
        add = d / 10;
        d -= add * 10;
      }
      digits[bi + ai] = d;
    }
    if (add > 0)
    {
      digits[bi + a_digits.size()] += add;
    }
  }

  reverse(digits.begin(), digits.end());

  bool num_appeared = false;
  for (unsigned int i = 0; i < digits.size() - 2; i++)
  {
    if (digits[i] > 0)
    {
      num_appeared = true;
    }
    if (!num_appeared)
    {
      continue;
    }
    cout << digits[i];
  }

  if (!num_appeared)
  {
    cout << 0;
  }

  cout << endl;
}