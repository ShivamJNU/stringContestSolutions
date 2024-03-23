#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k;
    cin >> n >> k;

    int m;
    cin >> m;

    string s;
    cin >> s;

    // cout<<s.length()<<endl;

    vector<int> vec(26, 0);

    int cnt = 0;

    string str = "";

    for (int i = 0; i < m; i++)
    {
        vec[s[i] - 'a']++;

        bool con = true;

        for (int i = 0; i < k; i++)
        {
            if (vec[i] == 0)
            {
                con = false;
            }
        }

        if (con)
        {
            cnt++;
            str.push_back(s[i]);
            for (int i = 0; i < k; i++)
            {
                vec[i] = 0;
            }
        }
    }

    if (cnt >= n)
    {
        cout << "Yes" << endl;
        return;
    }

    for (int i = 0; i < k; i++)
    {
        if (vec[i] == 0)
        {
            char ch = ('a' + i);
            str.push_back(ch);
            break;
        }
    }

    int diff = n - str.length();

    while (diff--)
    {
        str.push_back('a');
    }

    cout << "No" << endl;
    // cout << str << endl;

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
