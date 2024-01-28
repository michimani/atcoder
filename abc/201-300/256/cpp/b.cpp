#include <iostream>
#include <list>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  list<bool> m = {false};
  ui p = 0;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;

    m.pop_front();
    m.push_front(true);
    for (ui k = 0; k < a; k++)
    {
      m.push_front(false);
    }

    while (m.size() > 4)
    {
      p += ui(m.back());
      m.pop_back();
    }
  }

  cout << p << endl;
  return 0;
}