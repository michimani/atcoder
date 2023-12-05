#include <iostream>
#include <stack>

using namespace std;

int main()
{
  string s;
  cin >> s;

  unsigned long n = s.length();
  unsigned long cur = 1;
  unsigned int ans = 0;
  stack<unsigned long> prev_stack;
  prev_stack.push(0);

  while (cur < n)
  {
    unsigned long prev = prev_stack.top();
    prev_stack.pop();

    if (s[cur] != s[prev])
    {
      ans += 2;
      cur++;

      if (prev_stack.empty())
      {
        cur++;
        prev_stack.push(cur - 1);
      }
      continue;
    }

    cur++;
    prev_stack.push(prev);
    prev_stack.push(cur - 1);
  }

  cout << ans << endl;
}