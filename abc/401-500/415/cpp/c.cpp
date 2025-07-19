#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using ui = unsigned int;

bool can_mix_all(ui n, string s)
{
    vector<bool> visited(1 << n, false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        if (current == (1 << n) - 1)
            return true;

        for (ui i = 0; i < n; i++)
        {
            if (!(current & (1 << i)))
            {
                int next = current | (1 << i);
                if (!visited[next] && s[next - 1] == '0')
                {
                    visited[next] = true;
                    q.push(next);
                }
            }
        }
    }

    return false;
}

int main()
{
    ui t;
    cin >> t;

    for (; t--;)
    {
        ui n;
        string s;
        cin >> n >> s;

        cout << (can_mix_all(n, s) ? "Yes" : "No") << endl;
    }

    return 0;
}