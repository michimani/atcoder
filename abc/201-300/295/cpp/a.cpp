#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n;
  cin >> n;

  map<string, bool> y = {{"and", true},
                         {"not", true},
                         {"that", true},
                         {"the", true},
                         {"you", true}};

  for (int i = 0; i < n; i++)
  {
    string w;
    cin >> w;
    if (y.count(w) > 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}