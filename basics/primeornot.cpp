//program to check wheteher entered number is prime or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    float x=n/2;
    int div=floor(x);
    int i=2;
    int flag=0;
    float rem;
    //cout<<div<<endl;
    //cout<<i<<endl;
    while(i<=div){
        rem=n%i;
        //cout<<rem;
        i+=1;
        if(rem==0){
            flag=1;
            cout<<"entered number is not prime"<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"entered number is prime";
    }

}