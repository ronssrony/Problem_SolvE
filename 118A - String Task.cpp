#include<bits/stdc++.h>
using namespace std ;


bool isVowel(char c )
{
     if(c=='A' || c=='a' || c=='O' || c=='o' || c=='Y'||c=='y' || c=='E' || c=='e' || c=='U' || c=='u' ||c=='I' || c=='i')
     {
        return true ;
     }
     else 
     {
        return false ;
     }
}
int main()
{
  string s1 ;
  cin>>s1 ;
  string s2 ;

  for(int i = 0 ; i<s1.size() ; i++)
  {
      int ch = s1[i]; 
      if(isVowel(s1[i]))
      {
         continue ;
      } 
      
      else if(ch>=64 && ch<=97)
      {
         s2 +='.' ; 
         s2 += s1[i] | ' '; 
      }
      else 
      {
        s2 +='.';  
        s2 +=s1[i] ;
      }
  }
  cout<<s2<<endl;
}
