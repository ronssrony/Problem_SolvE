#include<bits/stdc++.h>
using namespace std ;
#define ll unsigned long long int

int main()
{
    ll n  ;
    cin>>n ;
    ll ans = n%4 ;
    if(n==0)
    {
        cout<<"1"<<endl;
        return 0 ; 
    }
    if(ans==1)
    {
     cout<<"8"<<endl;
    }
    else if(ans==2)
   {
    cout<<"4"<<endl;
   }
   else if(ans==3)
   {
    cout<<"2"<<endl;
   }
   else if(ans==0)
   {
    cout<<"6"<<endl;
   }

}
