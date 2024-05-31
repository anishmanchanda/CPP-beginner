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
    int flag=0;
    while (flag<=n){
        
        cout<<flag<<endl;
        sum+=flag;
        flag+=1;
    }

    cout<<"sum of numbers upto  n is: "<<sum<<endl;
    return 0;
     
}