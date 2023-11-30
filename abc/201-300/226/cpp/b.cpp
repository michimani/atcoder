#include <iostream>
#include <map>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  map<string, bool> L;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int l;
    cin >> l;
    string ll = "-";
    for (unsigned int j = 0; j < l; j++)
    {
      string a;
      cin >> a;
      ll += a + "-";
    }

    L[ll] = true;
  }

  cout << L.size() << endl;
  return 0;
}