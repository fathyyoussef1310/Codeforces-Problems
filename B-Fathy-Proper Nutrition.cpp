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
int main()
{
 ll n,a,b;
 cin>>n>>a>>b;
    for (ll i = 0; i <= n / a; ++i)
    {
        if ((n - (a*i) )% b == 0)
        {
            cout << "YES\n" << i << " " << (n - (i * a)) / b << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}