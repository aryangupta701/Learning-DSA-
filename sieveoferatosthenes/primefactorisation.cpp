#include<iostream>
using namespace std;

void primefactorize(int num){
    int spf[100];
    for(int i=0;i<=num;i++)
    spf[i]=i;

    for(int i=2;i<=num;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=num;j=j+i){
                if(spf[j]==j)
                spf[j]=i;
            }
        }
    }



    while(num!=1){
        cout<<spf[num]<<" ";
        num=num/spf[num];
    }

}
int main(){
    int num;
    cin>>num;
    primefactorize(num);
}