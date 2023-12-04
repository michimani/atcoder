#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<bool> three(3, false);
  for (unsigned int i = 0; i < n; i++)
  {
    int d1, d2;
    cin >> d1 >> d2;
    three[i % 3] = d1 == d2;

    if (three[0] && three[1] && three[2])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}