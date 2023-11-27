#include <iostream>

using namespace std;

int main()
{
  unsigned long long N = 0;
  cin >> N;

  while (true)
  {
    if (N % 2 != 0)
    {
      break;
    }

    N /= 2;
  }

  while (true)
  {
    if (N % 3 != 0)
    {
      break;
    }

    N /= 3;
  }

  if (N == 1)
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}