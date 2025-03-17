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
vector<ll> div(ll n) {
    vector<ll> v;
    int i;
    for (i = 1; i < n / i; ++i)
    {
        if (n % i == 0)
        {
            v.push_back(i),
            v.push_back(n / i);
        }
    }
    if (i * i == n)
    {
        v.push_back(i);
    }
    return v;
}
int main()
{
    fathy
    ll x;
    cin >> x;
    ll ans = LLONG_MAX;
    ll l = 1, r = x;
    vector<ll> v = div(x);
    for (int i = 0; i < v.size(); ++i) {
        if (lcm(v[i], x / v[i]) == x) {
            if (ans > max(v[i], x / v[i]))
            {
                l = v[i];
                r = x / v[i];
                ans = max(v[i], x / v[i]);
            }
        }
    }
    cout << l << " " << r;
}