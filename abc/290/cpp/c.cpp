#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned long N, K;
  cin >> N >> K;

  map<unsigned long, bool> A;
  for (unsigned long i = 0; i < N; i++)
  {
    unsigned long a;
    cin >> a;
    A[a] = true;
  }

  if (A.count(0) == 0)
  {
    cout << 0 << endl;
    return 0;
  }

  unsigned long m = 1;
  unsigned long selected = 1;
  while (selected < K)
  {
    if (A.count(m) != 0)
    {
      m++;
      selected++;
    }
    else
    {
      break;
    }
  }

  cout << m << endl;
}