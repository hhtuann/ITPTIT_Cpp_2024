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
    LL k;
    cin >> n >> k;
    LL x;
    map<LL, int> div;
    for (int i = 0; i < n && cin >> x; i++, div[x % k]++)
        ;
    LL cnt = div[1] * (div[1] - 1) / 2 + div[0] * div[2];
    for (int i = 3; i <= (k + 2) / 2; i++)
    {
        if (2 * i == k + 2)
            cnt += div[i] * (div[i] - 1) / 2;
        else
            cnt += div[i] * div[k + 2 - i];
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