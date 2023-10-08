#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned int N = 0;
    int K = 0, Q = 0;
    cin >> N >> K >> Q;

    vector<int> A(N, K);

    for (int i = 0; i < Q; i++)
    {
        unsigned int a = 0;
        cin >> a;
        A[a - 1]++;
    }

    for (unsigned int ai = 0; ai < N; ai++)
    {
        if (A[ai] - Q > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
