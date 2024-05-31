//program to print all prime nos between a and b
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter number a: ";
    int a;
    int b;
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    for(int i=a;i<=b;i++){
        int x=i/2;
        int flag=0;
        int div=floor(x);
        int j=2;
        while(j<=div){
            float rem;
            rem=i%j;
            j+=1;
            if(rem==0){
                flag=1;
            }
        }
        if(flag==0){
            cout<<"prime: "<<i<<endl;
        }
    }
}