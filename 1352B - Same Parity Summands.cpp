include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n , k ;
    cin>>n>>k ; 
    if(n<k )
    {
        cout<<"NO"<<endl;
    }
    else if(n&1 && !(k&1))
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        if(n%2==0 && k%2==0)
        {
          cout<<"YES"<<endl;  
          for(int i = 0  ;i<k-1 ; i++)
          {
            cout<<1<<" "; 
          }
          cout<<(n-(k-1))<<endl;
        }
        else if(n%2==0 && k%2==1)
        {
            if(n<=(2*(k-1)))
            {
                cout<<"NO"<<endl;
                return ;
            }
            cout<<"YES"<<endl;
            for(int i  = 0 ; i<k-1 ;i++)
             {
                cout<<2<<" " ;
             }
             cout<<(n- 2*(k-1))<<endl;
        }
        else if(n%2==1 && k%2==1)
        {
            cout<<"YES"<<endl;
            for(int i =  0 ;i<k-1 ;i++)
            {
                cout<<"1"<<" " ;
            }
            cout<<(n-(k-1))<<endl;
        }
 
    }
   
    
 
}
int main()
{
int _; 
cin>>_;
while(_--)
{
solve();
}
     return 0;
}
