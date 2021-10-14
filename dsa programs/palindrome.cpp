#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(string s, int l , int r);
int main ()
{
    string s;
     cin>>s;
  cout<<ispalindrome(s,0,s.length()-1);
   
    return 0;

}
bool ispalindrome( string s , int l , int r)
{
    if(l>=r)
    return true;
    else if (s[l]!=s[r])
    return false;
    else return (ispalindrome(s,l+1,r-1));
}