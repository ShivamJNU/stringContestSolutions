#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n != s.length())
    {
        cout << "-1" << endl;
        return;
    }

    // cout<<s.length()<<endl;

    // int n = s.length();

    map<char, int> m;

    for (auto &e : s)
    {
        m[e]++;
    }

    char odd_ch = '#';
    int odd_freq = -1;

    for (auto &e : m)
    {
        if (e.second % 2 == 1)
        {
            odd_ch = e.first;
            odd_freq = e.second;
        }
    }

    string final = s;

    int ptr = 0;

    int count = 0;

    for (auto &e : m)
    {
        int cnt = e.second;

        if (cnt % 2 == 0)
        {
            while (cnt)
            {
                final[ptr] = e.first;
                final[n - ptr - 1] = e.first;
                ptr++;
                cnt -= 2;
            }
        }
        else
        {
            count++;
        }
    }

    if (count > 1)
    {
        cout << "-1" << endl;
        return;
    }

    if (odd_ch == '#')
    {
        cout << final << endl;
        return;
    }
    else
    {
        int cnt = (odd_freq + 1) / 2;
        while (cnt--)
        {
            final[ptr] = odd_ch;
            final[n - ptr - 1] = odd_ch;
            ptr++;
        }
    }

    cout << final << endl;

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