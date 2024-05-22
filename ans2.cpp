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


int main(void)
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    // ll tc; tc = 1;
    // while(tc--)
    // {
    //     solve();    
    // }
    get(n);get(m);
    ll l = 0,r = m;
    while(l<=r)
    {
        
      ll mid = (l+r)/2;
      ll k = 1;
      forn(n)
      {
        k*=mid;
        if(k>m)break;
      }
      if(k>m)r = mid-1;
      else if(k<m)l = mid +1;
      else {cout<<mid newl;return 0;}
    }
    cout<<"-1" newl;
}