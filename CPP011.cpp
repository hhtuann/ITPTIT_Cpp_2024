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
    for (int i = 0, x; i < n && cin >> x; i++, v.push_back(x))
        ;
    reverse(v.begin(), v.end());
    int k;
    cin >> k;
    auto pos = lower_bound(v.begin(), v.end(), k);
    if (*pos == k)
        cout << n - 1 - (pos - v.begin());
    else
        cout << -1;
}
int main()
{
    ONLY_CPP
    // input

    solve();
    return 0;
}