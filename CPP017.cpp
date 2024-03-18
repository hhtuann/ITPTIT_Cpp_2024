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
struct Tre
{
    int id;
    int name;
    int age;
    int height;
} a[100000];
void input(Tre &a)
{
    cin >> a.name >> a.age >> a.height;
}
void output(Tre a)
{
    cout << a.name << " " << a.age << " " << a.height;
}
int main()
{
    ONLY_CPP
    // input
    int n;
    cin >> n;
    int pos = 0;
    int MAX = -1;
    for (int i = 1; i <= n; i++)
    {
        input(a[i]);
        if (a[i].age > MAX)
        {
            MAX = a[i].age;
            pos = i;
        }
    }
    output(a[pos]);
    return 0;
}