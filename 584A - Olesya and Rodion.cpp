#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n, m; 
    cin>>n>>m ; 
    if(n==1 && m==10)
   {
    cout<<"-1"<<endl;
   }
   else if(n>=2 && m==10)
   {
     for(int i = 1 ; i<n ; i++)
     {
        cout<<"1" ;
     }
     cout<<"0"<<endl;
   }
   else 
   {
    for(int i = 0 ;i<n ; i++)
    {
        cout<<m;
    }
    cout<<endl;
   }
 
    return 0 ;
}
