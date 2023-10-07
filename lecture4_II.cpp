#include<iostream>
using namespace std;


int main(){

    // float a,b;
    // cout<<"Give 2 floating point numbers as input "<<endl;
    // cin>>a>>b;

    // if(a>0.01 && b>a){
    //     cout<<"The condition in if statement is correct";
    // }

    //  if(a>0.01 || b>a){
    //     cout<<"The condition in if statement is correct";
    // }else{
    //     cout<<"the condition is false";
    // }



    // int a,b,c,d;

    // cout<<"give three integers as input: a,b,c,d"<<endl;
    // cin>>a>>b>>c>>d;

    // if(a>b && c>d){
    //     cout<<"haha";
    // }else if(a>b && c<d){
    //     cout<<"hehe";
    // }else{
    //     cout<<"huhu";
    // }


int a;
cout<<"enter the integer a: "<<endl;
cin>>a;

switch(a){
case 1:
    cout<<"the value of a is 1";
    break;
case 2:
    cout<<"the value of a is 2";
    break;
case 3:
    cout<<"the value of a is 3";
    break;
default:
    cout<<"default will be printed";
}




    int marks;

    cout<<"Student , please enter the marks to calculate the grade: ";
    cin>>marks;

    if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";

    }
    else if( marks>70){
        cout<<"C";

    }else{
        cout<<"pass";
    }

}