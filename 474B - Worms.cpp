#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n ;
    cin>>n ;
    int arr[n] ;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ;
    }
    int arr1[n+1]={0} ;
    int sum = 0 ;
    for(int i = 1 ; i<n ; i++)
    {
       sum +=arr[i-1] ;
       arr1[i] = sum ;
    } 
    int m ; 
    cin>>m ; 
    int arr2[m] ;
    for(int i = 0 ; i<m ; i++)
    {
        cin>>arr2[i] ; 
    }
    for(int i  = 0 ; i<m ; i++)
    {
        cout<<lower_bound(arr1,arr1+(n),arr2[i])-arr1 ;
        cout<<endl ; 
 
    }
 
}
