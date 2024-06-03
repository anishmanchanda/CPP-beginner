//prgram to check whether entered number is divisble by 2 and/or 3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    if (n%2==0 && n%3==0){
        cout<<"divisible by both 2 and 3"<<endl;
    }
    else if(n%2==0){
        cout<<"divisble by 2 only"<<endl;
    }
    else if(n%3==0){
        cout<<"divisible by 3 only"<<endl;
    }
    else{
        cout<<"not divisible by both 2 and 3"<<endl;
    }
}