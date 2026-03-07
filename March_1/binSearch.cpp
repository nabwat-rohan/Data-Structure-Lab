#include<iostream>
using namespace std;
int binSearch(int arr[], int size, int target){
int low=0;
int high= size - 1;
while(low<=high){
int mid = low + (high-low)/2;
if(arr[mid]==target){
    return mid;
}
else if (arr[mid]<target){
    low = mid + 1;
}
else if (arr[mid]>target){
    high = mid - 1;
}
}
return -1;
}
int main(){
int arr[10] = {-30, -12, 5, 10, 18, 40, 53, 65, 77, 93};
int result = binSearch(arr,10,40);
if (result!=-1){ cout<<"Element found at index "<<result<<endl;}
else cout<<"Element not found!"<<endl;


return 0;
}