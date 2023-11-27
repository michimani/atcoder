#include <iostream>

using namespace std;

int main()
{
  int N = 0;
  cin >> N;

  int prev_a = 0;
  for (int i = 0; i < N; i++)
  {
    int a = 0;
    cin >> a;
    if (i == 0)
    {
      prev_a = a;
      continue;
    }

    if (a != prev_a)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}