/*                                 بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم
                             (وَاصبِر فَإِنَّ اللَّهَ لا يُضيعُ أَجرَ المُحسِنينَ)
*/

#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES"
#define NO cout << "NO"
#define ll long long
#define ct cout <<
#define cn cin >>
#define N "\n"
#define ull unsigned long long
#define all(v) v.begin(), v.end()
#define fathy ios::sync_with_stdio(false); cin.tie(0);

void solve()
{
    int t;
    cn t;
    while (t--)
    {
        string x, y;
        cn x;
        cn y;

        reverse(all(x)); // to make samllest bits in the first
        reverse(all(y));
        int cy = y.find('1'); // to find first one in the y
        int cx = x.find('1', cy); // to find first 1 after cy

        ct abs(cx - cy) << N;
    }
}

int32_t main()
{
    fathy;
int t;
cin>>t;
int a,b;
while (t--)
{
    int n;
    cin>>n;
        if (n%2==0)
        {
            a=n/2;
            b=n/2;
        }
        else
        {
            a=n-1;
            b=1;
        }
    cout<<a<<" "<<b<<endl;
}
    return 0;
}
