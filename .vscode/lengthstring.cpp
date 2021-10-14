#include<iostream>
using namespace std;
int main ()
{
    char a[100];
    gets( a );
    int i=0;
    for(i=0;a[i]!='\0';i++);
    cout<< i;
}