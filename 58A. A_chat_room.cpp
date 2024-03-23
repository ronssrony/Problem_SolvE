#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s ;
    cin>>s ;
    string sc = "hello" ;
    
    int it = 0 ;
    for(int i = 0 ;i<s.size(); i++)
    { 
        if(sc[it]==s[i])
        {
            it++ ;
           
        }
    }
    if(it==5)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

     return 0;
}
