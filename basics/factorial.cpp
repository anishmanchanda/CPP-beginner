#include<iostream>
using namespace std;
//factorial w function

int fact(int n){
    int product=1;
    for(int i=n;i>=1;i--){
        product *=i;
    }
    return product;
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<fact(num)<<endl;
}