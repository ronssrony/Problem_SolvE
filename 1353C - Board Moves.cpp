#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
void  solve()
{
   ll n ;
   cin>>n ; 
   n  = n/2 ;
 
   cout<<(n*(n+1)*(2*n+1)*8)/6<<endl;
    
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
