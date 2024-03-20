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
    vector<int> v(n);
    int res = 0;
<<<<<<< HEAD
    for (auto &x : v)
        cin >> x;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            res = i;
            // break;
        }
=======
    for(auto &x: v)
        cin >> x;
    v.push_back(0);
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
            res = i;
>>>>>>> 70033b1852963bcd80e1feaa0ad17564cb9e56f8
    }
    cout << res << endl;
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
