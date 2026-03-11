#include<iostream>
using namespace std;
void ascendingSort(int arr[], int s){
for(int i=0; i<s; i++){
    for(int j=0; j<s-1; j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]= arr[j+1];
            arr[j+1]= temp;
        }
    }
}
}
int main(){
int n=6;
int soldCopies[n]= {35,12,27,18,9,24};
cout<<"The number of copies sold in each college:"<<endl;
for(int i=0; i<n; i++){cout<<soldCopies[i]<<" ";}
ascendingSort(soldCopies,n);
cout<<"\nThe number of copies sold in sorted manner:"<<endl;
for(int i=0; i<n; i++){cout<<soldCopies[i]<<" ";}
int median= ( soldCopies[n/2]+ soldCopies[(n/2)+1])/2;
cout<<"\nThe median sale figure: "<<median<<" units."<<endl;
return 0;
}
