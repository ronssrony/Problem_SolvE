#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ; 
    cin>>n ; 
    vector<int>vec(n); 
     int ev(0) , od(0);
     vector<int>v1;
     vector<int>v2;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>vec[i];
        if(vec[i]&1)
        {
            od++;
            v1.push_back(vec[i]);
        }
        else 
        {
            ev++;
            v2.push_back(vec[i]);
        }
    }
    if( !(od&1) && !(ev&1) || (ev==0) || (od==0))
    {
       cout<<"YES"<<endl ;
       return ;
    }
    else 
    {
        for(auto i:v1)
        {
            auto it = find(v2.begin(),v2.end(), i+1); 
            auto it1 = find(v2.begin(),v2.end(), i-1); 
            if(it!=v2.end())
            {
              cout<<"YES"<<endl;
              return; 
            }
            if(it1!=v2.end())
            {
              cout<<"YES"<<endl;
              return; 
            }
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
