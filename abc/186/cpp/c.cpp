#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  int N = 0;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    stringstream ss;
    ss << oct << i;
    if (to_string(i).find('7') == string::npos && ss.str().find('7') == string::npos)
    {
      ans++;
    }
  }

  cout << ans << endl;
}