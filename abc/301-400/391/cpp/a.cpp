#include <iostream>
#include <map>

using namespace std;

int main()
{
  string d;
  cin >> d;

  map<char, char> oppo = {
      {'N', 'S'},
      {'S', 'N'},
      {'E', 'W'},
      {'W', 'E'},
  };

  for (auto dd : d)
    cout << oppo[dd];

  cout << endl;

  return 0;
}