#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int n , m ; 
    cin>>n>>m ;
    int mov  ;  
    if(n%2==0)
    {
        mov = n/2 ;
    }
    else 
    {
        mov = (n/2)+1 ; 
    }
 
    if(n<m)
    {
        cout<<"-1"<<endl;
    }
    else if(n==m)
    {
        cout<<n<<endl;
    }
    else if(n>m)
    {
        if(mov%m==0)
        {
            cout<<mov<<endl;
        }
        else 
        {
            while((mov%m)!=0)
            {
                mov++ ;
            }
            cout<<mov<<endl;
        }
      
    }
}
