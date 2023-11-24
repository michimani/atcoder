#include <iostream>
#include <set>

using namespace std;

int main()
{
  char c;
  cin >> c;

  set<char> vowel{'a', 'i', 'u', 'e', 'o'};

  if (vowel.contains(c))
  {
    cout << "vowel" << endl;
  }
  else
  {
    cout << "consonant" << endl;
  }

  return 0;
}