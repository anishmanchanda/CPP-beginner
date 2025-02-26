//to check if given number is a power of 2
//only 1 bit is 1 rest all are 0
#include <iostream>
using namespace std;

bool checkpower2(int num){
    return (num && ! (num & num-1));
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    if (checkpower2(n)){
        cout<<"power of 2"<<endl;
    }
    else{
        cout<<"not power of 2"<<endl;
    }
    return 0;
}