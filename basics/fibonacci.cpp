#include<iostream>
using namespace std;

void fib(int num){
    int t1,t2;
    t1=0;
    t2=1;
    int nextterm;
    cout<<t1<<endl<<t2<<endl;
    for(int i=1;i<=num;i++){
        nextterm=t1 + t2;
        cout<<nextterm<<endl;
        t1=t2;
        t2=nextterm;
        
    }
}

int main(){
    int n;
    cout<<"enter no. of terms: ";
    cin>>n;
    fib  (n); 
}