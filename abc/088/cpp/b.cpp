#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<unsigned int> cards(n, 0);
  for (auto &c : cards)
  {
    cin >> c;
  }

  sort(cards.rbegin(), cards.rend());

  int a = 0, b = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      a += cards[i];
    }
    else
      b += cards[i];
  }

  cout << (a - b) << endl;
}