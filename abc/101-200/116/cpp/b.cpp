#include <iostream>
#include <map>

using namespace std;

int f(int n)
{
  if (n % 2 == 0)
  {
    return n / 2;
  }

  return n * 3 + 1;
}

int main()
{
  int s;
  cin >> s;

  int i = 1;
  map<int, int> a_i = {{s, i}};
  int prev = s;
  while (true)
  {
    i++;
    int a = f(prev);
    if (a_i.count(a) > 0)
    {
      cout << i << endl;
      return 0;
    }
    a_i[a] = i;
    prev = a;
  }
}