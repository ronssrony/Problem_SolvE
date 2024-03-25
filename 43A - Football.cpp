#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    map<string,int>mp ; 
    for(int i = 0 ; i<n ; i++)
    {
       string s ;
       cin>>s; 
       mp[s]++ ; 
    }
    int currentmax = INT_MIN ;
    string res; 
   for(auto it = mp.cbegin() ; it!=mp.cend() ; it++)
   {
         if((it->second)>currentmax)
         {
            currentmax = it->second ;
            res = it->first ;
         }
   }

   cout<<res<<endl;
}
