#include<bits/stdc++.h>
using namespace std ;

int main()
{
     vector<int>v(3) ; 

     for(auto &i:v)
     {
        cin>>i ;
     }
    
     if(v[0]==1  && v[1]==1 && v[2]==1)
    {
        cout<<(v[0]+v[1])+v[2]<<endl;
        return 0 ;
    }
    else if(v[0]==1  && v[1]==1 )
    {
        cout<<(v[0]+v[1])*v[2]<<endl;
        return 0 ;
    }  
    else if((v[0]==1) && (v[2]==1))
    {
        cout<<v[0]+v[1]+v[2] ;
        return 0 ;
    } 
    else if(v[0]==1 )
    {
      cout<<(v[0]+v[1])*v[2] ;
      return 0 ;
    }
    else if(v[2]==1)
    {
        cout<<v[0]*(v[1]+v[2]) ;
        return 0 ;
    }
    else if(v[1]==0 || v[1]==1)
    {
        int mx = max(v[0],v[2]) ; 
        int mn = min(v[0],v[2]) ; 
        cout<<(mn+v[1])*mx ;
        return 0 ;
    }
    cout<<v[0]*v[1]*v[2] ;
    return 0 ;
   
}
