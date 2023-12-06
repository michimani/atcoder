#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  int d;
  cin >> n >> d;

  bool dc = false;
  int prev = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    if (i > 0 && t - prev <= d)
    {
      cout << t;
      dc = true;
      break;
    }
    prev = t;
  }

  if (!dc)
  {
    cout << "-1";
  }

  cout << endl;

  return 0;
}