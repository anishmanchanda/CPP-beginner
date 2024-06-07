#include<iostream>
using namespace std;

int fact(int n){
    int product=1;
    for(int i=n;i>=1;i--){
        product *=i;
    }
    return product;
}

int main(){
    int nCr,n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    nCr=fact(n)/(fact(r)*fact(n-r));
    cout<<nCr<<endl;

}
