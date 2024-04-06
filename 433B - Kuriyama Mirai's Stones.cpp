#include<bits/stdc++.h>
using namespace std ;
#define ll unsigned long long int 
int main()
{
    ll n ;
    cin>>n ;
    ll arr[n] ;
    ll prefix[n+1]={0} ;
    ll prefix1[n+1]={0}; 
    for(int i = 0 ;i<n ; i++)
    {
        cin>>arr[i]; 
    }
    for(int i = 1 ; i<n+1; i++)
 
    {
        prefix[i] = prefix[i-1]+arr[i-1] ;
    }
 
    sort(arr,arr+n) ; 
    for(int i =1 ;i<n+1 ; i++)
    {
        prefix1[i] = prefix1[i-1]+arr[i-1] ;
    }
    int m ; 
    cin>>m ; 
    while(m--)
    {
        int t,l,r ;
        cin>>t>>l>>r ;
        if(t==1)
        {
            cout<<prefix[r]-prefix[l-1]<<endl;
        }
        else 
        {
            cout<<prefix1[r]-prefix1[l-1]<<endl;
        }
    }
 
 
 
}
