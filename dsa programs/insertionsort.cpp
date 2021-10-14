#include<iostream>
using namespace std;
void insertionsort (int a[], int size);
int main ()
{
 int size;
 cout<<"Enter the size of array";
 cin>>size;
 int a[size];
 cout<<"Enter the array : ";
 for(int i=0; i<size ; i++)
 cin>>a[i];
 insertionsort(a,size);
 for(int i=0; i<size ; i++)
cout<<a[i]<<" ";
 return 0;

}

void insertionsort (int a[], int size)
{
    int i, j, temp;
    for ( i=1;i< size; i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
          if(a[j]>temp)
          {
            a[j+1]=a[j];
            if(j==0)
            a[j]=temp;
          }
          else {
              a[j+1]=temp;
              break;
          }
        }
    }
}