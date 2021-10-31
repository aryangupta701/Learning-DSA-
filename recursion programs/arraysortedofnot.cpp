//program to check a array is sorted or not 

#include<iostream>
using namespace std;

bool issorted(int arr[], int n){
    if(n==1)
    return true;
    bool restarray=issorted(arr+1,n-1);
    return ((arr[0]<arr[1]) && restarray);
}

int main()
{
    int size;
    int arr[100];
    cout<<"Enter size : ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<issorted(arr,size);
}