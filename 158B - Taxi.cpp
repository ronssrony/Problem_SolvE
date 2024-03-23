#include<iostream>
#include<algorithm>
#include<map>
using namespace std ;


int main()
{
    int n ; 
    cin>>n ; 
    int arr[n] ; 
    map<int , int>m ;
    for(int i =  0 ; i<n;  i++)
    {
        cin>>arr[i] ;
        m[arr[i]]++ ;
    }

    if(m[1]<=m[3])
    {
       int two ; 
       if(m[2]&1)
       {
         two = (m[2]/2)+1 ;
       }
       else
       {
        two = m[2]/2 ;
       }
       cout<<m[3]+m[4]+two ;
    }
    else 
    {
        int one = m[1]-m[3] ;
        int two = m[2]*2 ;
        int xtra ; 
        if((two+one)%4==0)
        {
            xtra = 0 ;
        }
        else 
        {
            xtra = 1 ;
        }
        two = (two+one)/4 ;

        cout<<xtra+two+m[3]+m[4] ;
        
        
    }
 
   
}
