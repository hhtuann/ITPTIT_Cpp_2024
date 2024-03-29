#include <bits/stdc++.h>
#include <cctype>
using namespace std;
#define LL long long
#define hhtuan "hhtuann"
#define ONLY_CPP                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
#define sp " "
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */

struct SinhVien
{
    string name = "";
    int dob;
    double point;
    void input()
    {
        string s;
        while (cin >> s)
        {
            name += " " + s;
            if (cin.peek() == '\n')
                break;
        }
        name.erase(0, 1);
        cin >> dob >> point;
    }
    void output(int i)
    {
        cout << "#" << i << sp << name << sp << dob << sp;
        cout << point << endl;
    }
};

int main()
{
    ONLY_CPP
    // input
    int n;
    cin >> n;

    vector<SinhVien> v(n);
    double Min = inf;
    double Max = -inf;
    for (auto &x : v)
    {
        x.input();
        Max = max(Max, x.point);
        Min = min(Min, x.point);
    }

    int id = 0;
    for (auto x : v)
    {
        if (Max == x.point)
            x.output(++id);
    }
    cout << endl;

    id = 0;
    for (auto x : v)
    {
        if (Min == x.point)
            x.output(++id);
    }
    return 0;
}
