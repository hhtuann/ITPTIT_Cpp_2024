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
    int Max = -inf;
    int id = 0;
    for(auto x: v)
        cin >> x;
    v.push_back(0)
    for (int i = 1; i <= n; i++)
    {
        if (v[i] < v[i - 1])
        {
            id = i;
            break;
        }
    }
    cout << id % n << endl;
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