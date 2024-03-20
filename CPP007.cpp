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

LL calc(int n)
{
    return n * (n - 1) / 2;
}

int main()
{
    ONLY_CPP
    // input
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    map<int, int> x;
    map<int, int> y;
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> p.first >> p.second;
        mp[p]++;
        x[p.first]++;
        y[p.second]++;
    }
    LL cnt = 0;
    for (auto it : x)
        cnt += calc(it.second);
    for (auto it : y)
        cnt += calc(it.second);
    for (auto it : mp)
        cnt -= calc(it.second);
    cout << cnt;
    return 0;
}