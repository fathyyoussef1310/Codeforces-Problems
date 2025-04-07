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
bool check(ll a, ll b, ll c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return true;
    }else {
        return false;
    }
}
int main()
{
    fathy
    string s;
    cin>>s;
    int n=s.size();
    string ans="";
    for (int i = 0; i < n; i++)
    {
        s[i]=tolower(s[i]);
        if (s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i' )
        {
            continue;
        }
        else
        {
            ans+='.';
            ans+=s[i];
        }
    }
    cout<<ans<<endl;
}