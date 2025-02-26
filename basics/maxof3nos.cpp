//Program to find out maximum of 3 given numbers
#include <iostream>
using namespace std;

int main(){
    cout<<"Enter number 1: "<<endl;
    int num1;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    int num2;

    cin>>num2;
    cout<<"Enter number 3: "<<endl;

    int num3;
    cin>>num3;
    
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<endl;
        }
        else{
            cout<<num3<<endl;
        }
    }
    else{
        if(num2>num3){
            cout<<num2<<endl;
        }
        else{
            cout<<num3<<endl;
        }
    }
    
    
    return 0;

}