#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int 
 
bool isInteger(double num) {
    return num == static_cast<int>(num);
}
 
void solve()
{
    ll n;
    cin>>n ; 
   long double a(0) , b ;
 
    b = cbrt(n-a) ;
    while(b>=0)
    {  
        a++ ;
        b = cbrt(n-pow(a,3)) ;
        
       if(isInteger(b) && b>0)
       {
        cout<<"YES"<<endl;
        return ;
       }
      
    }
    cout<<"NO"<<endl;
 
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
