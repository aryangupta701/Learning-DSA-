//program to find the number in an array where all the numbers except one are present thrice

#include<iostream>
#include<math.h>
using namespace std;

void findunique(int arr[],int  size,int k){
    int ans[64]={0};
    for(int i=0;i<size;i++){
       int num=arr[i];
       int pos=0;
       while(pos<32){
           if((num&(1<<pos)))
           {
               ans[pos]=(ans[pos]+1)%k ;
           }
           pos=pos+1;
       }
       
    }
    int sum=0;
    for(int i=0;i<64;i++)
    {
        if(ans[i])
        sum=sum+pow(2,i);
    }
    cout<<sum;
}
int main(){
    int arr[100],size;
    cout<<"Enter the size of array : ";
    cin>>size;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    findunique(arr,size,3);
    return 0;
}