#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n ; 
    int arr[n] ; 
    for(int i =  0 ;i< n; i++)
    {
      cin>>arr[i] ; 
    }
    sort(arr,arr+n) ; 
    int vasily ;
    cin>>vasily ; 
    int cnt =0 ;
   
    
    while(vasily--)
    {
        int x; 
        cin>>x;  
        int ans = upper_bound(arr,arr+n,x)-arr; // returns an iterator to the upper bound of the value passed to it.
        cout<<ans<<endl;  
    }
}
