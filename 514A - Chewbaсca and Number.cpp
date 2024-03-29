#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    string s ;
    cin>>s ; 
    bool flg(true); 
    if(s[0]=='9')
    {
        flg = false ;
    }
    for(int i = 0 ; i<s.size() ;i++)
    {      
        if(s[i]>'4' && flg)
        {   
            int x = s[i]-'0' ;
            x = 9-x ;
            char c = x+'0' ;
            s[i] = c ;
        }
        flg = true ;
    }
    cout<<s<<endl;
    return 0 ;
}
