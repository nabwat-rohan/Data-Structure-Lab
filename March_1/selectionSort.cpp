#include<iostream>
using namespace std;
void selectionSort(int arr[], int size){
for(int i=0; i<size-1; i++){
    int minIndex=i;
    for(int j=i+1; j<size; j++){
        if(arr[j]<arr[minIndex]){minIndex = j;}
    }
    if(minIndex!=i){
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
}
void printArray(int arr[], int size){
for(int i=0; i<size; i++){ cout<<arr[i]<<" ";}
cout<<endl;
}
int main(){
int arr[10] = {89,56,74,68,82,100,49,87,95,63};
selectionSort(arr, 10);
printArray(arr, 10);
return 0;
}