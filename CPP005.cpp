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
    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    for (auto &v : a)
        cin >> v;

    map<int, int> cnt;
    for (auto v : a)
        cnt[v]++;

    int ans = 0;
    while (!cnt.empty())
    {
        int f = w;
        ans++;
        for (int i = 20; i >= 0; i--)
        {
            int d = 1 << i; // 2^i
            while (f >= d && cnt.count(d))
            {
                f -= d;
                cnt[d]--;
                if (cnt[d] == 0)
                    cnt.erase(cnt.find(d));
            }
        }
    }
    cout << ans << endl;
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