#include<iostream>
using namespace std;

int main(){
    int size,arr[100],uniquelement=0;
    cout<<"Enter the size : ";
    cin>>size;
    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
        uniquelement=uniquelement^arr[i];
    }

    cout<<"The unique element is : "<< uniquelement;
    return 0;
    
}