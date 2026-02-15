#include<iostream>
using namespace std;
struct StudentRecord {
    int id;
    int credits;
    double cgpa;
};
int main(){
StudentRecord students[10];
for(int i=0; i<10; i++){
    cout<<"Enter student "<<i+1<<" ID: ";
    cin>>students[i].id;
}
cout<<endl;
  for(int i=0; i<10; i++){
    int v;
    cout<<"Enter student "<<i+1<<"\'s completed credit no.: ";
    cin>>v;
    if(v<0){cout<<"Credit completion cannot be negative. Try with valid value again."<<endl; i--;}
    else students[i].credits = v;
}
cout<<endl;
for(int i=0; i<10; i++){
    double v;
    cout<<"Enter student "<<i+1<<"\'s CGPA: ";
   cin>>v;
    if(v>=0 && v<=4) students[i].cgpa = v;
    else {cout<<"Invalid CGPA! Try with valid value again."<<endl; i--;}
}
cout<<endl;
cout<<"IDs of CGPA more than 3.75 :"<<endl;
for(int i=0; i<10; i++){
    if(students[i].cgpa>3.75){
        cout<<students[i].id<<endl;}
}
cout<<endl;
cout<<"IDs of >50 credits completed :"<<endl;
for(int i=0; i<10; i++){
    if(students[i].credits>50){
        cout<<students[i].id<<endl;}
}
return 0;
}