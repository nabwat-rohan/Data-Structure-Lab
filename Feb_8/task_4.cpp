#include<iostream>
using namespace std;
int main(){
int A[10]={8,4,6,1,6,9,6,1,9,8};
int n=10,counter=0,s;
cout<<"Input a number to search: ";
cin>>s;
for(int i=0; i<n; i++){
    if(A[i]==s){counter++;}
}
cout<<"The number occurs "<<counter<<" times in the array";
return 0;
}
