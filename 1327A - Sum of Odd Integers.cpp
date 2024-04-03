#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int 
void solve()
{
    ll a , b; 
    cin>>a>>b ; 
 
      if((b*b)>a)
    {
        cout<<"NO"<<endl;
    }
    else if((a%2==0)&&(b%2==0))
    {
        cout<<"YES"<<endl;
    }
    else if((a%2!=0)&&(b%2!=0))
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl ;
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
