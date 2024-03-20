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

struct Vegetable
{
    int id;
    string name = "";
    double buy, sell, profit;
    LL nutrition;
    void input(int i)
    {
        id = i;
        cin >> name;
        cin >> buy >> sell >> nutrition;
        profit = sell - buy;
    }
    void output()
    {
        cout << id << sp << name << sp << nutrition << sp;
        cout << fixed << setprecision(2) << profit << endl;
    }
};
bool cmp(Vegetable a, Vegetable b)
{
    if (a.nutrition == b.nutrition)
        return a.profit < b.profit;
    return a.nutrition > b.nutrition;
}
int main()
{
    ONLY_CPP
    // input
    int n;
    cin >> n;
    cin.ignore();
    vector<Vegetable> v(n);
    int i = 0;
    for (auto &x : v)
    {
        x.input(++i);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        x.output();
    }
    return 0;
}
