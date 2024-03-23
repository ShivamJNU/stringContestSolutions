#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> m1;

    for (auto &e : s)
    {
        m1[e]++;
    }

    int odd = 0, even = 0;

    for (auto &e : m1)
    {
        if (e.second % 2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    if (odd == 0 || odd == 1)
    {
        cout << "Ravi" << endl;
        return;
    }

    if (odd % 2 == 0)
    {
        cout << "Vivek" << endl;
        return;
    }

    cout << "Ravi" << endl;

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
