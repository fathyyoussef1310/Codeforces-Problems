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

int main() {
    fathy;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool ans = false;
        sort(all(a));
        int c = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[i - 1])
            {
                c++;
            } else
            {
                c = 1;
            }
            if (c == 3) {
                cout << a[i] << '\n';
                ans = true;
                break;
            }
        }
        if (!ans) {
            cout << "-1" << endl;
        }
    }
}
