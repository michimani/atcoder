#include <iostream>
#include <map>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  string prev = "";
  int seq = 0;
  char prev_c = '.';
  map<string, bool> sm;
  string s;
  cin >> s;
  for (unsigned int i = 0; i < n; i++)
  {
    if (prev_c == s[i])
    {
      seq++;
    }
    else
    {
      seq = 1;
    }

    prev = {s[i]};
    prev += to_string(seq);
    sm[prev] = true;
    prev_c = s[i];
  }

  cout << sm.size() << endl;
  return 0;
}