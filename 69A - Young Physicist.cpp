#include<bits/stdc++.h>
using namespace std;


int main()
{
 int n ;
 cin>>n ;
 int sum =  0;
 int arr[n][3] ;
 
 for(int i = 0  ;i<n;  i++)
 {
    for(int j = 0 ; j<3 ; j++)
    {
        cin>>arr[i][j] ;
    }
 }
 bool flag = true ;
 for(int j = 0; j<3 ;j++)
 {
    for(int i = 0 ; i<n ; i++)
    {
        sum += arr[i][j] ;
    }

    if(sum!=0)
    {
        flag = false ;
        break;
    }
 }


if(flag == true )
 {
    cout<<"YES"<<endl;
 }
 else 
 {
    cout<<"NO"<<endl;
 }
 
     return 0;
}
