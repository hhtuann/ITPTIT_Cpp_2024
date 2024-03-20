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
int main()
{
    ONLY_CPP
    // input
    string s1, s2;
    cin >> s1 >> s2;
    int len = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        string tmp = s1.substr(i);
        if (s2.find(tmp) == 0)
        {
            len = tmp.size();
            break;
        }
    }
    cout << s1.size() + s2.size() - len;
    return 0;
}
