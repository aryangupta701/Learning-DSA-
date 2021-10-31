//program to print all substring of a string 
#include<iostream>
using namespace std;

void substr(string s, string ans ){
if(s.length()==0)
{
    cout<<ans<<endl;
    return;
}
// int code=s[0];
string ros=s.substr(1);
substr(ros,ans+s[0]);
substr(ros,ans);
// substr(ros,ans+to_string(code));
}

int main(){
string str;
cin>>str;
substr(str,"");
return 0;
}