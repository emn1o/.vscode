#include <bits/stdc++.h>  
#include <vector>
#include <algorithm>
#define ll long long
#define newl <<'\n'
#define newt <<'\t'
#define news <<' '
#define forn(n) for(int i = 0;i<n;i++)
#define For(n,k) for(int i = k;i<n;i++)
#define modd 1000000007
#define ui unsigned
#define pb push_back
#define get(a) ll a;cin>>a;
using namespace std;
typedef vector < ll > vi;
typedef vector < vi > vvi;
typedef pair < int, int > ii; 
typedef set<int> sat;

void solve()
{
    string s;
    cin>>s;
    ll n = s.size();
    ll ans = 1;
    bool flag = true;
    forn(n-1)
    {
        if(s[i]>s[i+1])ans++;
        if((s[i]=='0')&&(s[i+1]=='1'))
        {
            if(flag)flag = false;
            else ans++;
        }
    }
    cout<<ans newl;
}
int main(void)
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll tc;cin>>tc;
    while(tc--)
    {
        solve();    
    }
    
}