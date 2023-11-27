#include <iostream>

using namespace std;

int main()
{
  int m = 0;
  cin >> m;

  string m_str = to_string(m);

  if (m < 100)
  {
    cout << "00" << endl;
    return 0;
  }

  if (m <= 5000)
  {
    if (m_str.length() < 4)
    {
      cout << "0" << m_str[0] << endl;
    }
    else
    {
      cout << m / 100 << endl;
    }

    return 0;
  }

  if (m <= 30000)
  {
    cout << m / 1000 + 50 << endl;
    return 0;
  }

  if (m <= 70000)
  {
    cout << (m / 1000 - 30) / 5 + 80 << endl;
    return 0;
  }

  cout << 89 << endl;
}