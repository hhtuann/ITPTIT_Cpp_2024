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
    vector<int> v;
    cin >> n;
    for (int i = 0, x; i < n && cin >> x; i++, v.push_back(x))
        ;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int type;
        int x;
        cin >> type;
        if (type == 1)
        {
            cin >> x;
            v.push_back(x);
        }
        else if (type == 2)
        {
            cin >> x;
            if (x >= v.size())
                cout << -1 << endl;
            else
                v.erase(v.begin() + x);
        }
        else if (type == 3)
        {
            cin >> x;
            int pos = -1;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == x)
                {
                    pos = j;
                    break;
                }
            }
            cout << pos << endl;
        }
        else
        {
            for (auto it : v)
                cout << it << " ";
            cout << endl;
        }
    }
}
int main()
{
    ONLY_CPP
    // input
    solve();
    return 0;
}