#include<iostream>
using namespace std;
int main(){
int arr1[20]={10,20,30,40,50},
    arr2[30]={1,2,3,4,5,6,7,8},
    n1=5, n2=8,
    new_arr[n1+n2];
 for(int i=0; i<n1; i++){
    new_arr[i]=arr1[i];
 }
for(int i=0; i<n2; i++){
    new_arr[n1+i]=arr2[i];
 }
 cout<<"Output: ";
 for(int i=n1+n2-1; i>=0; i--) cout<<new_arr[i]<<" ";
return 0;
}
