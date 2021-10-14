#include<iostream>
#include<cstring>
using namespace std;
void powersetstring ( string a , int i, string );
int main()
{
    string a;
    cin>> a;
    string c="";
    powersetstring(a,0,c);
    return 0;
}

void powersetstring ( string a , int i, string cur )
{
    if(i==a.length())
    {
        cout<<cur<<" ";
    }
    else 
    {
        powersetstring(a,i+1,cur);
         powersetstring(a,i+1,cur+a[i]);
    }
}