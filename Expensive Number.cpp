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
int main() {
    fathy
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int cnt = 0, ma = 0;
        for (auto& i : s)
        {
            if (i == '0') {
                cnt++;
            } else {
                ma = max(ma, cnt + 1);//// in test casses that doesn't have 000
            }
        }
        cout << s.size() - ma << endl;
    }
}