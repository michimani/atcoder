#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string n_str = to_string(n);
  int sum = 0;
  for (auto &i : n_str)
  {
    sum += (i - '0');
  }

  if (n % sum == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}