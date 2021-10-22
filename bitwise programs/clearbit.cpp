//program to clear a bit at perticular position
#include<iostream>
using namespace std;
 
int main(){
    int num, pos ;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter position : ";
    cin>>pos;
    int x=1<<(pos-1);
    x=~x;
    cout<<(x&num);
    return 0;
}