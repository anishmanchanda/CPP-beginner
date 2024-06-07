#include<iostream>
using namespace std;

//sum of n natural numbers
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

bool pythtrip(int x, int y, int z){
    int a=max(x,max(y,z)); 
    
}


int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<sum(n)<<endl;
}