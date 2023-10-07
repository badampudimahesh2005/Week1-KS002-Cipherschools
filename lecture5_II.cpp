#include<iostream>
using namespace std;

int main(){
// int a[5];
// int i;

// cout<<"give 5 integers as input"<<endl;

// for(i=0;i<5;i++){
//     cin>>a[i];
// }

// cout<<"the five given integers are: "<<endl;
// for(i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }


int a[10];


cout<<"give 10 integers as input"<<endl;

for(int i=0;i<10;i++){
    cin>>a[i];
}

cout<<"the 10 given integers are: "<<endl;
for(int i=9;i>=0;i--){
    cout<<a[i]<<" ";
}

return 0;
}