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
    int a, b, l;
    cin >> a >> b >> l;
    int x = 0;
    int y = 0;
    set<int> st;
    int tmp = l;
    while (tmp % a == 0)
    {
        x++;
        tmp /= a;
    }
    tmp = l;
    while (tmp % b == 0)
    {
        y++;
        tmp /= b;
    }
    int ai = 1; // a^i
    for (int i = 0; i <= x; i++)
    {
        int bj = 1; // b^j
        for (int j = 0; j <= y; j++)
        {
            if (l % (ai * bj) == 0)
                st.insert(l / (ai * bj));
            bj *= b;
        }
        ai *= a;
    }
    cout << st.size() << endl;
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