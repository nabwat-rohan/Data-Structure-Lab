#include<iostream>
#include<cstring>
using namespace std;
string encode(string s, int j){
for(int i=j; i<s.length(); i+=(j+1)){
s[i]= s[i]+2;
}
return s;
}
int main(){
string s;
int j;
cout<<"Enter string (s): ";
getline(cin,s);
cout<<"Enter integer (j): ";
cin>>j;
string encoded=encode(s,j);
cout<<"Converted string: "<<encoded;
return 0;
}