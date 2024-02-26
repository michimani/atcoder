#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

struct Student
{
  ui i;
  ui h;
};

bool comp(Student &l, Student &r)
{
  return l.h < r.h;
}

int main()
{
  ui n;
  cin >> n;

  vector<Student> sv(n);
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    sv[i] = {i + 1, a};
  }

  sort(sv.rbegin(), sv.rend(), comp);

  for (auto s : sv)
    cout << s.i << endl;

  return 0;
}