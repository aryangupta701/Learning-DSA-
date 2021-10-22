#include<iostream>
using namespace std;

int countones(int num){
    int count=0;
    while(num!=0)
    {
        if(num&1)
        count++;
        num=num>>1;
    }
    return count;
}
 int main()
 {
     int num;
     cout<<"Enter the number : ";
     cin>>num;
     cout<<"Number of ones are : "<<countones(num);
 }