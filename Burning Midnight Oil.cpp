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
#define fathy ios::sync_with_stdio(false); cin.tie(0)
bool ok(int mid , int n , int k ) /// From AbdlKarim
{
    int sum = mid;
    for (int i = 1; i <= 30 ; ++i) ////why to 30 to k log2(10^9)==30
    {
            sum+=mid/::pow(k,i);
    }
        return sum>=n;
}
int main()
{
    int n,k;
    cin>>n>>k;
ll l=0,r=n;
int ans;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (ok(mid,n,k))
        {
           ans=mid;
           r=mid-1;
        }
        else
        {
          l=mid+1;
        }
    }
    cout<<ans<<endl;
}