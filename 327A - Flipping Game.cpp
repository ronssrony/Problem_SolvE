#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n ;
    cin>>n ;  
    int arr[n] ; 
    vector<int>vec ; 
    int cnt = 0 ;
    int mx = INT_MIN ;
    int cnt0 = 0 ; 
    for(int i = 1  ;i<n+1 ; i++)
    {
        cin>>arr[i] ;
        if(arr[i]==0)
        {
            cnt0++ ;
            mx = max(mx,cnt0) ;
        }
        else 
        {  cnt0-- ;
           if(cnt0<0)
           {
            cnt0=0 ;
           }
            cnt++ ;
        }
 
    }
    if(cnt==1 && n==1)
    {
        cout<<"0"<<endl;
        return 0 ;
    }
    else if(n==1)
    {
        cout<<"1"<<endl;
        return 0 ;
    }
    else if (cnt==n)
    {
        cout<<n-1<<endl;
        return 0 ;
    }
    else if(cnt==n-1)
    {
        cout<<n<<endl;
        return 0 ;
    }
   
  else
  {
    cout<<cnt+mx<<endl;
  }
    
}
