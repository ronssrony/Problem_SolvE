#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a , b ;
    cin>>a>>b ;
    int arr[a+1] ;
    for(int i =  0 ;i<a ; i++)
    {
        cin>>arr[i] ; 
    }
    set<int>s ; 
    for(int i = a-1 ; i>=0 ; i--)
    {
        s.insert(arr[i]) ; 
        arr[i] = s.size() ;
    }
 
 
    while(b--)
    {
    int x ;
    cin>>x ; 
    cout<<arr[x-1]<<endl;
    }
 
}
