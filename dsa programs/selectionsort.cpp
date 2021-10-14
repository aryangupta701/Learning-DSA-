#include<iostream>
using namespace std;
void selectionsort (int a[], int size);
int main ()
{
 int size;
 cout<<"Enter the size of array";
 cin>>size;
 int a[size];
 cout<<"Enter the array : ";
 for(int i=0; i<size ; i++)
 cin>>a[i];
 selectionsort(a,size);
 for(int i=0; i<size ; i++)
cout<<a[i]<<" ";
 return 0;

}

void selectionsort (int a[], int size)
{
    int i, j, min, temp; 
    for(i=0;i<size;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
          if(a[j]<a[min])
          min=j;
        }
        if(min!=i)
        {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }
    }
}