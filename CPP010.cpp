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

    vector<int> a(n);
    for (auto &v : a)
        cin >> v;

    multiset<int> st;
    for (auto &v : a)
        st.insert(v);

    while (true)
    {
        bool check = true;
        for (auto &v : a)
        {
            if (!check)
                break;
            for (auto &u : a)
            {
                if (!check)
                    break;
                if (st.find(abs(v - u)) == st.end())
                {
                    check = false;
                    st.insert(abs(v - u));
                }
            }
        }
        if (check)
            break;
    }

    cout << (st.size() - n) % 2 << "\n";
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