#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    vector<string> vec;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        vec.push_back(s);
    }

    string prefix = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        string temp = "";

        for (int j = 0; j < min(vec[i].length(), prefix.length()); j++)
        {
            if (prefix[j] == vec[i][j])
            {
                temp.push_back(prefix[j]);
            }
            else
            {
                break;
            }
        }

        prefix = temp;
    }

    if (prefix == "")
    {
        cout << -1 << endl;
        return;
    }

    cout << prefix << endl;

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