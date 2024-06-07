#include <iostream>
#include <math.h> 
using namespace std;
int main(){
    //153 is an armstrong number; as the sum of cubes of individual numbers is 153
    int sumcubes=0;
    int n;
    cout<<"enter number: ";
    cin>>n;
    int num=n;
    while(n>0){
        int lastdigit=n%10;
        sumcubes+=pow(lastdigit,3);
        n=n/10;

    }
    if(sumcubes==num){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }

}