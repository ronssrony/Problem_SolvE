#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
    int n,m,k ;
    cin>>n>>m>>k ; 
    int arr[m+1] ; 
    for(int i = 0  ;i<m+1 ; i++)
    {
        cin>>arr[i] ; 
    }
    int ans = 0 ;
    int diff = arr[m] ;
    for(int i = 0  ;i<m ; i++)
    {
        int cnt = 0 ; 
        arr[m] = diff; 
        int limit = max(arr[i],arr[m]); 
        while(limit)
        {   
            int a= arr[m]&1 ;
            int b = arr[i]&1 ;
            if((a^b)==1)
            {
                cnt++; 
            }
           
            arr[i] = arr[i]>>1 ;
            arr[m] = arr[m]>>1 ;
            limit = limit>>1 ;
        }
       
        if(cnt<=k)
        {
            ans++ ;
        }
    }
    cout<<ans<<endl;
}
