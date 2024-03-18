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
    vector<int> v;
    int cnt = 0;
    for (int i = 0, x; i < n && cin >> x; i++, v.push_back(x))
    {
        sort(v.begin(), v.end());
        int pos = lower_bound(v.begin(), v.end(), x) - v.begin();
        cnt += pos;
    }
    cout << cnt << endl;
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