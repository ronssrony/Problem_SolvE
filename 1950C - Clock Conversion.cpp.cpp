#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s ;
    cin>>s ;
    string s1 = s.substr(0,2) ;
    if(s1<"12")
    {
     if(s1[0]=='0' && s1[1]=='0')
     {
        s[0]='1'; 
        s[1]='2' ;
     }
     cout<<s<<" "<<"AM"<<endl;
    }
    else if(s.substr(0,2)=="12")
    {
     cout<<s<<" "<<"PM"<<endl;
    }
    else 
    {
        int x = stoi(s.substr(0,2)) ;
        x = x-12 ;
        string b = to_string(x) ;
        if(x<10)
        {
            cout<<"0";
        }
        cout<<b<<s.substr(2,3)<<" "<<"PM"<<endl;
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
