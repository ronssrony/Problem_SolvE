#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int a , b ;
    cin>>a>>b ;
    map<string,string>mp ;
    vector<string>vect ;
    for(int i = 0 ; i<b ; i++)
    {
        string s1 , s2 ;
        cin>>s1>>s2 ; 
        mp[s1] = s2 ;
    }
    for(int i = 0 ;i<a ; i++)
    {
        string s1 ;
        cin>>s1 ;
        if(s1.size()>mp[s1].size())
        {
           vect.push_back(mp[s1]) ;
        }
        else 
        {
           vect.push_back(s1) ;
        }
    }
    for(auto i:vect)
    {
        cout<<i<<" " ;
    }
    cout<<endl ;
}
