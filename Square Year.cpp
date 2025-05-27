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
////Input i trying to make it easier for you is (4900)
    int t;
    cin >> t;
    while (t--)
    {
        string s;//4900
        cin >> s;
        int year = stoi(s);
        bool found = false;
        for (int a = 0; a <= 99 && !found; ++a)   ///Why 99 cause i cut Year into two parts part a (Left Two digits ) and part b(Right two digits)
        {
            for (int b = 0; b <= 99; ++b)
            {
                if ((a + b) * (a + b) == year)///34 + 36 = (70 * 70) = 4900 Or (40 , 30)
                {
                    cout << a << " " << b << "\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found) cout << -1 << "\n";

    }
}