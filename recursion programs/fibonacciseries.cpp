//program to print all the n fibonacci series 
#include<iostream>
using namespace std;

void fiboseries(int num){
  int m=0,n=1,k=1;

  for(int i=1;i<=num;i++)
  {
      if(i==1)
      {
          cout<<m<<" ";
          continue;
          }

      if(i==2)
      {
          cout<<n<<" ";
          continue;
        }
      cout<<k<<" ";
      
      m=n;
      n=k;
      k=m+n; 

  } 
}
int main(){
    int n;
    cin>>n;
    fiboseries(n);
    return 0;
}