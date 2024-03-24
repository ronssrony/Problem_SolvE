#include<bits/stdc++.h>

using namespace std ;

int main()
{
   unsigned long long int x , y ;
    cin>>x>>y ; 
    vector<int>v1(y) ; 

    for(int i = 0 ; i<y ; i++)
    {
        cin>>v1[i] ;
    }
  unsigned long long int position = 1 ;
   unsigned long long int units = 0 ;
    for(int i = 0 ; i<y ; i++)
    { 
       
       if(v1[i]>=position)
       {
         units +=(v1[i]-position) ;
         position = v1[i] ;
       }
       else 
       {
        units +=((v1[i]+x)-position) ;
        position = v1[i] ;
       }
    }
    cout<<units<<endl;
}
