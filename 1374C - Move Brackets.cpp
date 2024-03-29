#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n; 
    cin>>n ; 
    string s ;
    cin>>s ;
    int flow = 0 ;
    int mn = INT_MAX  ;
    for(int i = 0  ;i< n; i++)
    {
        if(s[i]=='(')
        {
            flow++ ;
        }
        else 
        {
            flow-- ;
            mn = min(mn,flow) ;
        }
    } 
    cout<<(mn*-1)<<endl;
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
