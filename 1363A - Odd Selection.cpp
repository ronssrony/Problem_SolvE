#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n , k ; 
    cin>>n>>k  ; 
    int odd(0) , even(0); 
    int arr[n]; 
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i]; 
        if(arr[i]&1)
        {
            odd++ ;
        }
        else 
        {
            even++ ;
        }
    }
   
    if(n==k && (odd&1))
    {
        cout<<"Yes"<<endl;
        return ;
    }
    else if(n==k && (odd%2==0))
    {
        cout<<"No"<<endl;
    }
    else if((k==1) && (odd>0))
    {
        cout<<"Yes"<<endl;
        return ;
    }   
    else if((k&1)&& even>=2 && odd>0)
    {
       cout<<"Yes"<<endl;
    }
    else if((k&1) && (odd>=k))
    {
        cout<<"Yes"<<endl;
    }
    else if((k%2==0) && even>=1 && odd>0)
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
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
