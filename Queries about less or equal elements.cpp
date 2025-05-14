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
typedef vector<pair<ll,ll>> vlp;
typedef vector<pair<int,int>> vip;
#define fathy ios::sync_with_stdio(false); cin.tie(0);
vi prime;
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int mask(int n)
{
    string t = "0";
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7')
            t += s[i];
    }
    return stoi(t);
}
bool check(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}
bool valid(int n, int a, int b, int mn)
{
    n -= a / mn;
    n -= b / mn;
    return n <= 0 && a >= mn && b >= mn;
}
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    fathy;
int n;
cin>>n;
int m;
cin>>m;
vll a(n);
vll b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
sort(all(a));
    for(int i=0;i<m;i++)
    {
        int l = 0, r = n - 1, c = -1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(a[mid] <= b[i])
            {
                c = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << c + 1 << " ";
    }
}
