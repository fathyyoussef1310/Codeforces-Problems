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
int main() {
    fathy;
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin >> n;
        vector<vector<string>>w(3, vector<string>(n)); //==
        // words=
        // [
        // " "," "," "
        ////" " ," "," "
        ///" "," "," "
        ///]
        map<string, int> m;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j)
            {
                cin >> w[i][j];
                m[w[i][j]]++;
            }
        }
        vector<int> score(3, 0);
        for (int i = 0; i < 3; ++i) { //// length ///
            for (int j = 0; j < n; ++j)//// عددهم
            {
                string word = w[i][j];
                if (m[word] == 1)
                {
                    score[i] += 3;
                }
                else if (m[word] == 2)
                {
                    score[i] += 1;
                }
            }
        }
        for (int i = 0; i < 3; ++i)
        {
            cout << score[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
