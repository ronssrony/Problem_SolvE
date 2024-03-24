#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std ; 
bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}
 
int main()
{
    int x , y ;
    cin>>x>>y ; 
    vector< vector<int> >vect ;
    vect.resize(y) ;
    
    for(int i = 0 ; i<y ; i++)
    {
        int a , b ;
        cin>>a>>b ;
        vect[i].push_back(a) ; 
        vect[i].push_back(b) ;
    }
   
   sort(vect.begin() , vect.end() , sortcol) ;
   
    int cnt= 0 ; 

    for(int i = 0 ; i<y ; i++)
    {
        for(int j = 1; j<2; j++)
        {
            if(vect[i][j-1]<x)
            {
                x +=vect[i][j] ;
                cnt++;
            }
        }
    }
   if(cnt==y)
   {
    cout<<"YES"<<endl;
   }
   else 
   {
    cout<<"NO"<<endl;
   }
}
