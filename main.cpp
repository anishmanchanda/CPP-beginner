#include <iostream>
using namespace std;
int main(){
    int amount1;
    cout<<"enter amount 1: ";
    cin>>amount1;
    
    int amount2;
    cout<<"enter amount 2: ";
    cin>>amount2;

    int total;
    total=amount1 + amount2;
    cout<<"Total amount:"<<total<<endl; 

    if(total>2000){
        cout<<"MacBook Air";
    }   else{
        cout<<"Lenovo Yoga";
    }
     

    return 0;
    
    }
  