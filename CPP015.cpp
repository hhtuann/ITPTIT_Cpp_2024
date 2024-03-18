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

struct PhanSo
{
    int t, m;
    PhanSo(int a, int b)
    {
        t = a;
        m = b;
    }
    void input()
    {
        cin >> t >> m;
    }
    void output()
    {
        if (m < 0)
        {
            t = -t;
            m = -m;
        }
        cout << t << "/" << m;
    }
    void rutgon()
    {
        int gcd = __gcd(abs(t), abs(m));
        t /= gcd;
        m /= gcd;
    }
};
main()
{
    ONLY_CPP
    // input
    PhanSo a(0, 1), b(0, 1);
    a.input();
    b.input();
    string s;
    cin >> s;
    if (s == "Tong")
    {
        PhanSo c(a.t * b.m + b.t * a.m, a.m * b.m);
        c.rutgon();
        c.output();
    }
    else
    {
        PhanSo c(a.t * b.m - b.t * a.m, a.m * b.m);
        c.rutgon();
        c.output();
    }

    return 0;
}