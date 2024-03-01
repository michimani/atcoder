#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> cards(6, 0);
  cards[0] = (n / 5) % 6 + 1; // init
  for (ui i = 1; i < 6; i++)
    cards[i] = cards[i - 1] % 6 + 1;

  for (ui i = 0; i < n % 5; i++)
    swap(cards[i % 5], cards[i % 5 + 1]);

  for (auto c : cards)
    cout << c;
  cout << endl;

  return 0;
}