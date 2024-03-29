#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int a, b , res , rem ;
    cin>>a>>b ; 
    int ans = a ;
   while(a>=b)
   {
     res = a/b ;
     rem = a%b ;
     ans +=res ;
     a = res+rem ;  
   }
   cout<<ans<<endl;
}
