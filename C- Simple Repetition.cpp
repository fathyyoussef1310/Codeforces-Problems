/*                                 بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم

                             (وَاصبِر فَإِنَّ اللَّهَ لا يُضيعُ أَجرَ المُحسِنينَ)

*/
#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES"
#define NO  cout<<"NO"
#define ll  long long
#define ct   cout<<
#define cn   cin>>
#define N  "\n"
#define ull unsigned long long
#define all(v) v.begin(), v.end()
#define vec vector<ll>v(size)
#define cinVec for (int i = 0; i < v.size(); ++i) {cin>>v[i];}
#define coutVec for (int i = 0; i < v.size(); ++i) {cout<<v[i]<<" ";}
const ll c_size= 26+1;
typedef vector<int> vi;
#define fathy   ios::sync_with_stdio(false);cin.tie(0);
double  num = 1e10;
#define in(v) for (auto&i:v) cin >> i;
const ll INF=1e18;
const ll MN=-1e9;
const ll MOD=1e9+7;
const ll MX=4e4+9;
const ll PI=3.141592654;
const ll sz = 1e7 + 10;
bool composite[sz + 1];
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
void ans()
{
}
    int32_t main()
{
fathy;
int t;
cin>>t;
while (t--)
{
   ll x;
   cin>>x;
   int k;
   cin>>k;
    if ((isPrime(x)&& k==1) || x==1 && k==2 )
    {
        cout<<"Yes\n";
    }else {
        cout<<"No\n";
    }
}
}