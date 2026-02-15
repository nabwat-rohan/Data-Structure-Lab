#include<iostream>
using namespace std;
int main(){
 int r,c;
cout<<"Enter the number of rows and column: ";
cin>>r>>c;
int matrix[r][c];
cout<<"Enter the matrix elements: ";
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>matrix[i][j];
    }
  }
cout<<"The transpose matrix: "<<endl;
 for(int i=0; i<c; i++){
    for(int j=0; j<r; j++){
        cout<<matrix[j][i]<<" ";
    }
    cout<<endl;
 }
return 0;
}