#include<iostream>
using namespace std;
int searchelement(int a[], int key , int n)
{
    int low=0, high=n-1;
    int mid;
    while(low<=high)
    {
      mid=(low+high)/2;
      if(a[mid]==key)
      return mid;
      if(a[low]<a[mid])
      {
          if(key>=a[low] && key<a[mid])
          {
              high=mid;
          }
          else 
          low=mid;
      }

      else 
      {
          if(key>a[mid] && key<a[high])
          low=mid;
          else 
          mid=high;
      }

    }
return -1;
}
int main()
{
    int a[]={4,5,6,7,8,9,10,1,2,3};
    int e;
    cout<<"enter the element to be searched for :";
    cin>>e;
    cout<<searchelement(a,e,10);
    return 0;
}