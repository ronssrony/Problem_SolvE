#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n ; 
    cin>>n ; 
    vector<int>vec(n); 
    for(int i = 0 ; i< n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end()) ; 
    int mx = 1;
    int un = 1 ; 
    int dup =  1; 
    for(int i = 0 ; i<n-1 ; i++)
   {
      if(vec[i] == vec[i+1])
      {
        dup++ ;
        mx= max(mx,dup); 
      }
      else 
      {
        un++ ;
        dup=1 ;
      }
   }
  if(un==mx)
  {
    cout<<(mx-1)<<endl;
  }
  else 
  {
   int res = min(un,mx) ;
   cout<<res<<endl;
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
