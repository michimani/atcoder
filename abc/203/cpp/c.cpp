#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
  unsigned long n = 0;
  long long k = 0;
  cin >> n >> k;

  map<long long, unsigned long long> friends;
  vector<long long> friends_places;

  for (unsigned long i = 0; i < n; i++)
  {
    long long a = 0;
    unsigned long long b = 0;
    cin >> a >> b;

    if (friends.count(a) == 0)
    {
      friends[a] = b;
      friends_places.push_back(a);
    }
    else
    {
      friends[a] += b;
    }
  }

  sort(friends_places.begin(), friends_places.end());

  unsigned long long ans = (unsigned long long)(k);
  for (auto &fp : friends_places)
  {
    if (k - fp < 0)
    {
      break;
    }
    if (friends.count(fp) != 0)
    {
      k += friends[fp];
    }

    ans = (unsigned long long)(k);
  }

  cout << ans << endl;
}