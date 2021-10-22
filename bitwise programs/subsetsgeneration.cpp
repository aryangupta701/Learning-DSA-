//program to generate all possible subsets of a ser {a,b,c} 

#include <iostream>
using namespace std;

void subsets(char arr[], int n){
    for(int i=0;i<(1<<n);i++)
    {

        int j=i;
            if(j==0)
            cout<<"{}";
            for(int k=0;k<=2;k++){
                if(j&(1<<k))
                cout<<arr[k];
            }
            cout<<endl;
    }
}
int main()
{
    char arr[]={'a','b','c'};
    subsets(arr,3);
    return 0;
}