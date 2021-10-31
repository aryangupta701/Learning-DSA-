#include<iostream>
using namespace std;

void permutation(string str, string cur){
    if(str.length()==0)
 {   cout<<cur<<endl;
    return ;
}
    for(int i=0;i<str.length();i++){
        string ros = str.substr(0,i)+str.substr(i+1);
        permutation(ros,cur+str[i]);
    }
}
int main(){
    string str;
    cin>>str;
    permutation(str,"");
    return 0;
}
