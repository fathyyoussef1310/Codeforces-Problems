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
typedef vector<pair<int,int>> vip;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fathy ios::sync_with_stdio(false); cin.tie(0);

int main()
{
    fathy;
int k,l,m,n;
cin>>k>>l>>m>>n;
int d;
cin>>d;
int c= 0;
for (int i = 1; i <= d; ++i)
{
    if (i%k==0 || i%l==0 || i%m==0 || i%n==0)
    {
        c++;
    }
}
cout<<c;
}
