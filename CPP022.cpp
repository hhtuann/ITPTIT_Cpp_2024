#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define hhtuan "hhtuann"
#define ONLY_CPP                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define mod int(1e6 + 7)
#define nmax int(1e5 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
int n, k;
LL p[nmax];    // 26^i
LL Hash[nmax]; // bang bam
string s;

bool check(int len)
{
    unordered_map<LL, int> mp;
    for (int i = 1; i <= n - len + 1; i++)
    {
        int j = i + len - 1;
        LL id = (Hash[j] - Hash[i - 1] * p[len] % mod) % mod;
        while (id < 0)
            id += mod;
        mp[id]++;
        if (mp[id] >= k)
            return true;
    }
    return false;
}
int main()
{
    ONLY_CPP
    // input
    cin >> n >> k;
    cin >> s;
    s = " " + s;

    p[0] = 1;
    Hash[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] * 27 % mod;
        Hash[i] = Hash[i - 1] * 27 + s[i] - 'a' + 1;
        Hash[i] %= mod;
    }

    int res = 0;
    int l = 1;
    int r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << res;
    return 0;
}