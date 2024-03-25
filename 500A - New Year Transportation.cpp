#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n , m ; 
    cin>>n>>m ; 
    int arr[n] ;
    for(int i = 1 ; i<n ; i++)
    {
        cin>>arr[i] ; 
    }
    bool reach = false ;
    for(int i = 1 ; i<n;)
   {
      i=i+arr[i] ;
      if(i==m)
      {
        reach = true ;
        break;
      }
      else if(i>m)
      {
        reach = false ;
        break;
      }

   }
   if(reach)
   {
    cout<<"YES"<<endl;
   }
   else 
   {
    cout<<"NO"<<endl;
   }

}
