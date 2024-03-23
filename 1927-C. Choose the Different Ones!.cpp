#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a ; 
    int b ;
    int k ; 
    cin>>a>>b>>k ;
    int v1[a]; 
    int v2[b] ;
    map<int,int>mp ;   
    int ar1 = 0 ;
    int ar2 = 0 ;
    int siml = 0 ;
         
    for(int i = 0 ; i<a ; i++)
    {
        cin>>v1[i] ; 
        mp[v1[i]] = 1 ;

    }
    for(int i = 0 ; i<b ; i++)
    {
        cin>>v2[i];
        if(mp[v2[i]]==1)
        {
            mp[v2[i]] = 3 ; 
        }
        else if(mp[v2[i]]==0)
        {
           mp[v2[i]] = 2 ;
        }
    
    }
    int p = k/2 ;
    int q = k/2 ;

    for(int i = 1 ; i<=k ; i++)
    {
        if(mp[i]==1)
        {
            p-- ;
           ar1++ ;
        }
        else if(mp[i]==2) 
        {
          q-- ;
          ar2++ ;
        }
        else if(mp[i]==3)
        {
            siml++ ;
        }
    }
    if(ar1>k/2 || ar2>k/2)
    {
        cout<<"NO"<<endl;
    }
    else if(ar1==0 && ar2==0 && siml!=k)
    {
        cout<<"NO"<<endl;
    }
   else  if((ar1+ar2+siml)==k)
    {
        cout<<"YES"<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }
}    
int main()
{
int _; 
cin>>_;
while(_--)
{
solve();
}
     return 0;
}
