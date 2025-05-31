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
    fathy
int t;
cin>>t;
while (t--)
{
int ratings;
cin>>ratings;
    if (1900<=ratings)
    {
        cout<<"Division 1"<<N;
    }else if (1600<=ratings && ratings<=1899)
    {
        cout<<"Division 2"<<N;
    }else if (1400<=ratings && ratings<=1599)
    {
        cout<<"Division 3"<<N;
    }else
    {
        cout<<"Division 4"<<N;
    }
}
}
