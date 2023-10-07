#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"enter the two integers a and b"<<endl;
    cin>>a;
    cin>>b; 
 
 int c,d;
    cout<<"enter the integers c and d"<<endl;
    cin>>c>>d;


    //statement: a>b
    cout<<(a>b)<<endl;

    cout<<(a>b && c>d)<<endl;

    cout<<(a>b || c>d)<<endl;


    return 0;

}