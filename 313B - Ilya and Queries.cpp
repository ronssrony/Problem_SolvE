#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    string s ; 
    cin>>s ; 
    int x ;
    cin>>x ;
    int n=s.size() ; 
    int arr[n+1]={0} ; 
  
    for(int i = 0  ;i<s.size()-1 ; i++)
    {
        if(s[i]==s[i+1])
        {
            arr[i+1] = 1; 
        }
    }
    for(int i = 1 ; i<n ; i++)
    {
        arr[i] +=arr[i-1] ;
    }
 
   while(x--)
   {
    int a, b ;
    cin>>a>>b; 
    cout<<arr[b-1]-arr[a-1]<<endl;
   }
 
 
} 
