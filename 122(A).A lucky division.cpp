#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    int n ;
    cin>>n ; 
    bool flg = true ;
    string s = to_string(n) ;
    for(int i = 0 ; i<s.size() ; i++)
    {    
        if(s[i] != '4' && s[i] != '7')
        {
            flg = false ;
        }
    }
    if(flg)
    {
        cout<<"YES"<<endl;
        return 0 ;
    }
   double four = n/4.0 ;
   int x = four ;
   double seven = n/7.0 ;
   int y = seven ; 
   double fs = n/47.0 ; 
   int z = fs ;
   if(four-x == 0 || seven-y==0 || fs-z ==0)
   {
    cout<<"YES"<<endl;
   }
   else 
   {
    cout<<"NO"<<endl;
   }
    

    return 0 ;
}
