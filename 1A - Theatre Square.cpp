#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
   long long n , m , a ;
 
    cin>>n>>m>>a ; 
    
   long long  num1 = ceil((double)n/a) ;
    long long num2 = ceil((double)m/a) ;
  
   cout<<num1*num2<<endl;
   return 0 ;
}
