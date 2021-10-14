#include<iostream>
using namespace std;
void bubblesort (int a[], int size);
int main ()
{
 int size;
 cout<<"Enter the size of array";
 cin>>size;
 int a[size];
 cout<<"Enter the array : ";
 for(int i=0; i<size ; i++)
 cin>>a[i];
 bubblesort(a,size);
 for(int i=0; i<size ; i++)
cout<<a[i]<<" ";
 return 0;

}

void bubblesort (int a[], int size)
{int j,t,swap;
    for(int i=0; i<size-1;i++)
    { swap=0;
        for(j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {   swap=1;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        if(swap==0)
        break;
    }

}