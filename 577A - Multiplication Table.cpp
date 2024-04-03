#include<bits/stdc++.h>
using namespace std ;
 
#define ll  unsigned long long int 
int main()
{
    ll a  , b ;
    cin>>a>>b ;
    if( b==1 )
    {
        cout<<"1"<<endl;
        return  0 ; 
    }
   
  else 
  {
    int cnt = 0  ;
    int arr[2] ;
    arr[0] = 2 ;
    arr[1] = a ;
      for(int i = 1 ;i<=a ; i++)
      {
            if((b%i)==0)
            {   int mul = b/i ;
                int up = lower_bound(arr,arr+2, mul)-arr;
                if(up<2)
                {
                     cnt++ ;
                }
            }
      }
      cout<<cnt<<endl;
  }
 
 
}
