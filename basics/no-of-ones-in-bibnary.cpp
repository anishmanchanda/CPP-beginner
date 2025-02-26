#include <iostream>
using namespace std;
//to count the number of 1s in binary representation of a number
//
int main(){
    int count=0;
    int n;
    cout<<"enter number: ";
    cin>>n;

    while (true){
        if(n & n-1){
            count+=1;
            n=n-1;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}