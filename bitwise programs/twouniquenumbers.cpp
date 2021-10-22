//program to find a number where two unique elements are present in an array using xor

#include<iostream>
using namespace std;

void twouniqueelements(int arr[], int size){
    int uni=0;
    for(int i=0; i<size ; i++){
        uni=uni^arr[i];
    }
    int pos=0;
    while(1){
        if(uni&(1<<pos))
        break;
        else 
        pos++;
    }
    int x=0;
    for(int i=0; i<size ; i++){
        if((arr[i]&(1<<pos)))
        {
            x=x^arr[i];
        }
    }
   uni=uni^x;
    cout<<x<<endl<<uni;
}
int main(){
    int arr[100],size;
    cout<<"Enter the size of array : ";
    cin>> size;
    for(int i=0; i<size ; i++){
        cin>>arr[i];
    }
    twouniqueelements(arr,size);
   return 0;
}