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
    int x;
    int check = 0;
    int f[10004];
    memset(f, 0, sizeof(f));
    int maxx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (f[x] == 1)
            check = 1;
        maxx = max(maxx, x);
        f[x] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= maxx; i++)
    {
        for (int j = 1; j <= maxx; j++)
        {
            
        }
    }
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