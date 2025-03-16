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

bool isprime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    fathy
int n;cin>>n;
for (int i=n/2;i>=1;i--) {
        int k=n-i;
        if (__gcd(i,k)==1){
            cout<<i<<" "<<k;
            break;
        }
    }
}