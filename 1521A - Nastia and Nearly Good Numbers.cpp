#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
void solve()
{
    ll a , b ;
    cin>>a>>b ;
  if(b==1)
  {
    cout<<"NO"<<endl;
  }
  else if(a==1 && b==2)
  {
    cout<<"YES"<<endl;
    cout<<"1"<<" "<<"3"<<" "<<"4"<<endl; 
  }
  else if(b==2)
  {
    ll z = a*(a*b) ;
    ll x = a ;
    ll y = a*((a*b)-1) ;
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl; 
  }
  else 
  {
    ll z = a*b ;
    ll x = a  ;
    ll y = a*(b-1) ;
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
    
  }
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
