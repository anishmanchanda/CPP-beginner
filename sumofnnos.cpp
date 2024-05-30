//program to calculate sum of all whole numbers upto n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<= n;i++){
         sum+=i;
        cout<<i<<endl;
    }
    cout<<"sum of numbers upto  n is: "<<sum<<endl;
    return 0;
     
}