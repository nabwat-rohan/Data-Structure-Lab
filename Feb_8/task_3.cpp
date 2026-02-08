#include<iostream>
using namespace std;
int main(){
int arr[100]={1,4,6,3,6,9,1};
int n=7;
bool foundDup= false;
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
            n--;
            for(int k=j; k<n; k++){arr[k]=arr[k+1];}
            j--;
            foundDup=true;
        }
    }
}

if(foundDup)for(int i=0; i<n; i++) cout<<arr[i]<<" ";
else cout<<"Array already unique!";
return 0;
}
