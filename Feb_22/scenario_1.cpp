#include<iostream>
using namespace std;
void insertSort(int arr[], int n){
for(int i=1; i<n; i++){
    int key = arr[i];
    int j= i-1;
    while (j>=0 && arr[j]>key){
        arr[j+1]= arr[j];
        j--;
    }
    arr[j+1]=key;
}
}
int main(){
int score[10]={30,35,40,50,45,55,60,65,80,70};
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