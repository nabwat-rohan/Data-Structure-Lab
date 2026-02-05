#include<iostream>
using namespace std;
int main(){
int arr[]={12,32,43,1,54,53,15,64,3,13};
for(int i=0; i<10;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<"In inverse order: ";
for(int i=9; i>=0;i--){
    cout<<arr[i]<<" ";
}
return 0;
}
