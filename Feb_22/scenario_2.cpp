#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
for(int i=0; i<n-1;i++){
    for(int j=0; j<n-1-i; j++){
        if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}
    }
}
}
void insertSort(int arr[], int n){
for(int i=1; i<n; i++){
    int key = arr[i];
    int j= i-1;
    while (j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1]=key;
}
}
int main(){
int score[10]={89,56,74,68,82,100,49,87,95,63};
cout<<"Scores: \n";
for(int i=0; i<10; i++){
    cout<<score[i]<<" ";
}
insertSort(score, 10);
cout<<"\nSorted scores: \n";
for(int i=0; i<10; i++){
    cout<<score[i]<<" ";
}
return 0;
}