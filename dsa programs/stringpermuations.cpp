#include<iostream>
#include<cstring>
using namespace std;
void permutations( string s , int l, int r);
string swap (string s, int l , int r)
{ 
    char temp ;
    temp = s[r];
    s[r]=s[l];
    s[l]=temp;
    return s;
}
int main ()
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    permutations(s,0,s.length());
}

void permutations( string s , int l, int r)
{
if(l==r-1)
cout<<s<<endl;
char temp;
for( int i=l;i<r;i++)
{
    s=swap(s,l,i);

    permutations(s,l+1,r);
   s=swap(s,l,i);
   
}
}