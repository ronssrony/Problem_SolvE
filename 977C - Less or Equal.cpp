#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n , m; 
    cin>>n>>m  ;
    int arr[n]  ; 
    map<int,int>mp ; 
    for(int i = 0 ; i<n ; i++)  
    {
        cin>>arr[i] ; 
       mp[arr[i]]++ ;
    }
    sort(arr,arr+n) ; 
    int prefix[n+1] ; 
    
    int sum = 0 ;
    for(auto i:mp)
    {
        if(m==0 && (i.first>1))
        {
            cout<<"1"<<endl;
            return 0 ;
        }
 
        sum +=i.second ;
        if(sum==m)
        {
            cout<<i.first<<endl;
            return 0 ;
        }
        else if(sum>m)
        {
            break;
        }
 
    }
    cout<<"-1"<<endl ;
    
 
}
