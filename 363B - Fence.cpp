#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 

int main()
{
    int n,m ;
    cin>>n>>m ; 
    int arr[n] ;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ; 
    }
    int arr1[n+1]={0} ;
    int sum = 0 ;  
    for(int i = 1  ;i<n+1 ;i++)
    {
        sum+=arr[i-1] ;
        arr1[i] = sum ;
    }
    int mn = INT_MAX  ;
    int ans=0  ;
    for(int i = 0 ; i< n-(m-1) ;i++)
    {
       int rs =  arr1[i+m]-arr1[i];
    
       if(rs<mn)
       {
        mn = rs ; 
        ans = i ;
       }
    }
    cout<<ans+1<<endl;


}
