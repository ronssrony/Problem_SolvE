#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
   unsigned long long int  x, y ; 
    cin>>x>>y ; 
    unsigned long long int  a, b ;
    cin>>a>>b ;
    unsigned long long int  dmin  = min(a,b) ; 
    if(x==0 && y==0)
    {
        cout<<"0"<<endl;
        return ;
    }
    
    unsigned long long int mn = min(x,y) ;
    unsigned long long int mx = max(x,y) ;
    unsigned long long int fstsub = mx-mn ;
    unsigned long long int fst = (mn*b)+(fstsub*a) ;
    unsigned long long int fsta = (mn*a)+(mx*a) ;
    
 
   if(fst<fsta)
   {
    cout<<fst<<endl;
   }
   else 
   {
    cout<<fsta<<endl;
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
