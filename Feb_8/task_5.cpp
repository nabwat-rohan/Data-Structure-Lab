#include<iostream>
using namespace std;
int main(){
int arr[10]={8,4,6,1,6,9,6,1,9,8};
int n=10;
for(int i=0; i<n; i++){
    int counter=0;
    bool counted= false;
    for(int j=0; j<i; j++){
        if(arr[i]==arr[j]){
            counted=true;break;
        }
    }
    if(counted) {continue;}
    for(int k=0; k<n; k++){
        if(arr[k]==arr[i]) counter++;
    }
    cout<<arr[i]<<" occurs = "<<counter<<" ";
    if(counter==1) cout<<"time"<<endl;
    else cout<<"times"<<endl;
    }
return 0;
}
