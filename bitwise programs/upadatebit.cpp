#include<iostream>
using namespace std;

int main(){
    int num, pos , bitvlue;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter value : ";
    cin>>bitvlue;
    int x=~(1<<(pos-1));
    num=num&x;
    x=bitvlue<<(pos-1);
    num=num|x;
    cout<<num;

    return 0;
}