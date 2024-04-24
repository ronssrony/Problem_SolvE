#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int x1,x2,y1,y2 ; 
    cin>>x1>>y1>>x2>>y2 ;
    int x3,y3,x4,y4 ; 
    
   
    if(x1 == x2)
    
    {
       int rs = abs(y2-y1) ;
       x3 = x1+rs ;
       y3 = y1 ;
       x4 = x2+rs ;
       y4 = y2 ;
     cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;  
 
    }
    else if(y1 == y2)
    
    {
       int rs = abs(x2-x1) ;
       x3 = x1 ;
       y3 = y1+rs ;
       x4 = x2 ;
       y4 = y2+rs ;
     cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;  
 
    }
    else if(abs(x2-x1) == abs(y2-y1))
    {
        x3 = x1 ;
        y3 = y2 ;
        x4 = x2 ;
        y4 = y1 ;
       cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;  
    }
    else 
    {
        cout<<"-1"<<endl; 
    }
 
 
}
