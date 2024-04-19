#include<bits/stdc++.h>
using namespace std;
 
#define ll unsigned long long int 
 
void solve()
{
 
    ll n , k ;
    cin>>n>>k ;
    if(k==1)
    {
       cout<<"1"<<endl;
       return  ;
    }
    else if((n%k)==0)
    {
        cout<<"1"<<endl;
        return ;
    } 
    else if((k%n)==0)
    {
        cout<<k/n<<endl;
        return ;
    }
    else if((n>k))
    {
        cout<<"2"<<endl;
        return ;
    }
    else
    {
        cout<<(k/n)+1<<endl;
        return ;
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
