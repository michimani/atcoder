#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<char> abc(3, '.');
  int ans = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    abc[i % 3] = c;

    if (c == 'C' && abc[(i - 2) % 3] == 'A' && abc[(i - 1) % 3] == 'B')
    {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}