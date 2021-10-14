#include<iostream>
using namespace std;
void quicksort (int a[],  int l, int r);
int partition(int a[], int l, int r  );

int main ()
{
 int size;
 cout<<"Enter the size of array";
 cin>>size;
 int a[size];
 cout<<"Enter the array : ";
 for(int i=0; i<size ; i++)
 cin>>a[i];
 quicksort(a,0,size-1);
 for(int i=0; i<size ; i++)
cout<<a[i]<<" ";
 return 0;

}

void quicksort (int a[], int l, int r)
{
    if(l<r)
    {
    int mid;
mid=partition(a,l,r);
quicksort(a,l,mid-1);
quicksort(a,mid+1, r );
    }
}
int partition(int a[], int l, int r  )
{
  int i=l+1, temp;
  int j=r;
    int pivot=a[l];
    
while(i<=j)
{
    while (a[i]<pivot)
    {
        i++;
    }
    while(a[j]>pivot)
    {
        j--;
    }
   if(i<j)
   {
temp=a[i];
a[i]=a[j];
a[j]=temp;
   }

}
temp=a[j];
a[j]=a[l];
a[l]=temp;




return j;
}