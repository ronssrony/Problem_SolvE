#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    ll n ; 
    cin>>n ; 
    int x;
    map<ll,ll>mp ; 
    for(int i = 1 ; i<=n ; i++)
    {
      cin>>x ;
      x -=i ;
      mp[x]++ ;
    }
   ll total = 0; 
  for(auto it:mp)
  {
    ll a = it.second;
    total +=(a*(a-1))/2 ;
  }
  cout<<total<<endl;
  
}
int main()
{
int _; 
cin>>_;
while(_--)
{
solve();
}
     return 0;
}
