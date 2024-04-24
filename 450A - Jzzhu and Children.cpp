#include<bits/stdc++.h>
using namespace std ; 
 
int main()
{
    int n , m ; 
    cin>>n>>m; 
    int arr[n] ; 
    int mx=  INT_MIN ; 
    int res  ;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ;
        int d  = ceil(arr[i]/(double)m) ;
        if(mx<=d)
        {
           res = i ;
           mx = d ;
        }
    }
    cout<<res+1<<endl;
 
}
