#include<bits/stdc++.h>
using namespace std;

#define ll  long long int 

void solve()
{
    ll n,m ;
    cin>>n>>m ; 
    ll rem = m/(n-1); 

    if(n>m)
    {
        cout<<m<<endl;
    }
    else 
    {
        ll ans = rem+m ;
        if(ans%n==0)
        {
            cout<<ans-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
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
