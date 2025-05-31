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
    /// ///ماشيه بترتيب ان لو index even يبقا a[i] ==odd and vice versa
    //او العكس
    fathy;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        bool ans=true, p1, p2;
        for (int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if (i==0)
            {
                p1 = a % 2;///  to know if first number is even or not (cause first is  even index is odd and vice versa)
            }
            else if (i==1)
            {
                p2 = a % 2;
            }
            else
            {
                if (i%2==0 && a%2!=p1)
                {
                    ans = false;
                }
                if (i%2==1 && a%2!=p2)
                {
                    ans = false;
                }
            }
        }
        if (ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
