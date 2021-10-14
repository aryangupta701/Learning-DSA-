#include<iostream>
using namespace std;
int majorityelements(int a[], int k);
int main ()
{
    int k , i, a[100]; 
    cout<< " enter the size of array : ";
cin>>k;
cout << " Enter the elements of the array : ";
for ( i=0;i<k;i++)
cin>>a[i];
cout<<majorityelements(a,k);
}


int majorityelements(int a[], int k)
{
    int element=a[0], rep=1;

    for(int i=1;i<k;i++)
    {
        if(element==a[i])
        rep++;
        else rep--;

      if(rep==0)
      {
          element=a[i];
          rep=1;
      }
    }
    rep=0;
for(int i=0; i<k;i++)
{
    if(a[i]==element)
    rep++;
}
if(rep>k/2)
return element ;
else return 0;
}