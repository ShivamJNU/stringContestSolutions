#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int k;
    cin >> k;

    string s;
    cin >> s;

    // cout << s.length() << endl;

    if ((s.length() != 32) || (s[0]=='1')||(k>16))
    {
        cout << "SOSOSIMPSOSIMOP-1" << endl;
        return;
    }

    int ptr = 1;

    while (ptr < 32)
    {
        if (s[ptr] == '0')
        {
            if (k > 0)
            {
                s[ptr] = '1';
                k--;
                ptr += 2;
            }
            else
            {
                ptr++;
            }
        }
        else
        {
            ptr++;
        }
    }

    // cout << s << endl;

    int num = 0;

    for (int i = 1; i < 32; i++)
    {
        num += ((1 << (31 - i)) * ((int)(s[i] - '0')));
    }

    // cout << INT_MAX << endl;

    cout << num << endl;

    return;
}

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}