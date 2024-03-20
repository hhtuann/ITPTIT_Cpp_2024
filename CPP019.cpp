#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define hhtuan "hhtuann"
#define ONLY_CPP                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
void solve()
{
    // your solution
    int n;
    cin >> n;
    string s = "z";
    bool check = true;
    vector<int> v;
    v.push_back(0);
    for (int i = 1, x; i <= n && cin >> x; i++, v.push_back(x))
        ;
    v.push_back(0);
    v[1]--;
    for (int i = 1; i <= n && check; i++)
    {
        if (v[i] > 25)
            check = false;
        if (i % 2 == 1)
        {
            if (v[i] > s[s.size() - 1] - 'a')
                check = false;
            else
            {
                for (int j = v[i] - 1; j >= 0; j--)
                    s += j + 'a';
            }
        }
        else
        {
            if (s[s.size() - 1] == 'z')
                check = false;
            for (int j = 0; j < v[i] - 1; j++)
                s += j + 'b';
            s += max(s[s.size() - 1] + 1, v[i + 1] + 'a');
        }
    }
    if (check)
        cout << s;
    else
        cout << -1;
    cout << endl;
}
int main()
{
    ONLY_CPP
    // input
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
