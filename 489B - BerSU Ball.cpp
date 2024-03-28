#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int v1[n] ; 
    for(int i = 0 ; i< n; i++)
    {
        cin>>v1[i] ; 
    }
    int m ;
    cin>>m ; 
    int v2[m] ; 
    for(int i = 0 ; i<m ;i++)
    {
        cin>>v2[i] ; 
    }
    int cnt = 0 ; 
    sort(v1,v1+n) ;
    sort(v2,v2+m) ;
    for(int i= 0;  i<n ; i++)
    {
         for(int j = 0 ; j<m ; j++)
         {
             if(abs(v1[i]-v2[j])<=1)
             {
                cnt++ ;
                v2[j]=1000 ;
                break ;
                
             }
         }
    }        
    cout<<cnt<<endl;
}
