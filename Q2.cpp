#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    // int k=1;

    string s;
    cin >> s;

    // cout << s.length() << endl;
    // cout << s << endl;
    // return;

    if ((n != s.length())||(k<0)||(k>=n))
    {
        cout << "SOSSOSIMPSOSIMP-1" << endl;
        return;
    }
    // cout<<n<<" "<<k<<endl;
    // cout<<s<<endl;

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

    if (odd > (k + 1))
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
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