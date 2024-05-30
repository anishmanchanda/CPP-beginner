//program to tell wheher entered number is odd or even
#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"enter number: "<<endl;
    cin>>num;  
    if(num%2==0){
        cout<<"entered number is even"<<endl;

    }
    else{
        cout<<"entered number is odd"<<endl;
    }


    return 0;

}