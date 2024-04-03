#include<bits/stdc++.h>
using namespace std ;
 
#define ll unsigned long long int 
int main()
{
    int n ;
    cin>>n ;
    vector<ll>v1 ;
    vector<ll>v2 ;
    vector<ll>v3 ; 
 
    for(int i = 0 ; i< n; i++)
   {
    int x; 
    cin>>x; 
    v1.push_back(x) ;
   }
   for(int i = 0 ; i<n-1 ; i++)
   {
    int x; 
    cin>>x; 
    v2.push_back(x) ;
   }
   for(int i = 0  ;i<n-2 ; i++)
   {
    int x; 
    cin>>x; 
    v3.push_back(x) ;
   }
 
   sort(v1.begin() , v1.end()) ;
   sort(v2.begin() , v2.end()) ;
   sort(v3.begin() ,v3.end()) ; 
 
   vector<ll>newvec ; 
   set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(newvec)) ;
   set_difference(v2.begin(),v2.end(),v3.begin(),v3.end(),back_inserter(newvec)) ;
 
   for(auto i:newvec)
   {
    cout<<i<<endl;
   }
}
