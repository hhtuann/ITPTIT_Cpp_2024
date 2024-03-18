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

void chuanhoa(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
}
struct Vegetable
{
    int id;
    string name = "";
    double buy, sell, profit;
    LL nutrition;
    void input(int i)
    {
        id = i;
        string s;
        while (cin >> s)
        {
            chuanhoa(s);
            name += " " + s;
            if (cin.peek() == '\n')
            {
                cin.ignore();
                break;
            }
        }
        name.erase(0, 1);
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
        return a.profit > b.profit;
    return a.nutrition >= b.nutrition;
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