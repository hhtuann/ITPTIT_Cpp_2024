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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
void solve()
{
    // your solution
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    pair<int, int> p[n];
    for (int i = 0, x; i < n && cin >> x; i++, mp[x]++)
        ;
    int k = 0;
    for (auto it : mp)
        p[k++] = make_pair(it.first, it.second);
    sort(p, p + k, cmp);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < p[i].second; j++)
        {
            cout << p[i].first << " ";
        }
    }
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