#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, bool> num;
  for (unsigned int i = 0; i < 5; i++)
  {
    int n;
    cin >> n;
    num[n] = true;
  }

  cout << num.size() << endl;
  return 0;
}
