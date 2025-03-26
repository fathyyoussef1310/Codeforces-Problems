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
typedef vector<int> vi;
typedef vector<ll> vll;
#define fathy ios::sync_with_stdio(false); cin.tie(0);
int main()
{
    fathy
string s;
cin>>s;
int n=s.size();
for (int i = 0; i < s.size(); ++i)
{
        if (s[i]=='?')
        {
            s[i]='a';
        }
}
    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[n - i - 1])
        {
            if (s[i] == 'a' || s[n - i - 1] == 'a')
            {
                s[i] = s[n - i - 1] = max(s[i], s[n - i - 1]);
            }
            else
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << s << endl;
}