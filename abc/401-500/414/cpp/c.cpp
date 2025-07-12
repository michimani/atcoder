#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ull = unsigned long long;

bool isPalindrome(ull num, int base)
{
  vector<int> digits;
  ull temp = num;
  while (temp > 0)
  {
    digits.push_back(temp % base);
    temp /= base;
  }

  int len = digits.size();
  for (int i = 0; i < len / 2; i++)
    if (digits[i] != digits[len - 1 - i])
      return false;

  return true;
}

void generatePalindromes(vector<ull> &palindromes, ull maxN)
{
  for (int len = 1; len <= 12; len++)
  {
    if (len == 1)
    {
      for (ull i = 1; i <= 9; i++)
        if (i <= maxN)
          palindromes.push_back(i);
    }
    else
    {
      int halfLen = (len + 1) / 2;
      ull start = 1;
      for (int i = 1; i < halfLen; i++)
        start *= 10;

      ull end = start * 10;

      for (ull half = start; half < end; half++)
      {
        string halfStr = to_string(half);
        string palindrome = halfStr;

        int startIdx = (len % 2 == 0) ? halfLen - 1 : halfLen - 2;
        for (int i = startIdx; i >= 0; i--)
          palindrome += halfStr[i];

        ull num = stoull(palindrome);
        if (num <= maxN)
          palindromes.push_back(num);
      }
    }
  }
}

int main()
{
  int a;
  ull n;
  cin >> a >> n;

  vector<ull> palindromes;
  generatePalindromes(palindromes, n);

  ull sum = 0;
  for (ull num : palindromes)
    if (isPalindrome(num, a))
      sum += num;

  cout << sum << endl;
  return 0;
}