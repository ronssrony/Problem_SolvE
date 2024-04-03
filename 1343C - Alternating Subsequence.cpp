#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    int n ;
    cin>>n ; 
    ll arr[n] ;
    for(int i = 0  ;i<n ; i++)
    {
        cin>>arr[i] ;
    }
    ll mx = INT_MIN ;
    ll sum = 0 ;
    for(int i = 0  ;i<n ; i++)
    {
        mx = max(mx,arr[i]) ;
 
        if((arr[i]>0&&arr[i+1]<0) || (arr[i]<0&arr[i+1]>0))
        {
            sum +=mx ;
            mx = INT_MIN ;
        }
        else if(i==n-1 )
        {
            sum +=mx ;
        }
          
    }
    cout<<sum<<endl;
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
