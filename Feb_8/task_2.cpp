#include<iostream>
using namespace std;
int main(){
int A[10]={1,4,6,3,6,9},
    B[12]={5,3,7,1,2,6,13},
    C[20];
int na=5,nb=6,nc=0;
for(int i=0 ;i<na; i++){
    for(int j=0 ;j<nb; j++){
        if(A[i]==B[j]){
           bool addedBefore = false;
           for(int k=0; k<nc; k++){
            if(C[k]==A[i]){
            addedBefore = true;
            break;}
           }
          if(!addedBefore) {C[nc++]=A[i];}
           break;}
        }
}
if(nc==0){cout<<"No common element!";}
else{for(int i=0; i<nc; i++) cout<<C[i]<<" ";}
return 0;
}
