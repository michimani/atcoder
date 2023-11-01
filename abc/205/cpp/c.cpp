#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        cout << "=" << endl;
        return 0;
    }

    if (c % 2 == 1)
    {
        if (a < 0 && b > 0)
        {
            cout << "<" << endl;
        }
        else if (a > 0 && b < 0)
        {
            cout << ">" << endl;
            return 0;
        }
        else if (a < 0 && b < 0)
        {
            if (a > b)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
        else
        {
            if (a > b)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
    }
    else
    {
        if (abs(a) == abs(b))
        {
            cout << "=" << endl;
        }
        else if (abs(a) > abs(b))
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
        return 0;
    }
}
