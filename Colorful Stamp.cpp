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

int main()
{
    
    fathy;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int r = 0;
        int b = 0;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                r++;
            }
            else if (s[i] == 'B')
            {
                b++;
            }
            else // s[i] == 'W' segment separator
            {
                if ((r == 0 && b != 0) || (b == 0 && r != 0))
                {
                    ans = false;
                }
                r = 0;
                b = 0;
            }
        }
        //check last segment after last W
        if ((r == 0 && b != 0) || (b == 0 && r != 0))
        {
            ans = false;
        }
        if (ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}