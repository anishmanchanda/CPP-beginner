//program to find the length of longest arithmatic subarray in an array.
//arithmetic subarray: elements forming AP(same common difference)
#include <iostream>
using namespace std;
int main(){
    cout<<"enter number of elements: ";
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements: ";
        cin>>array[i];
    }
    int length=1;
    int pd=9999999;
    for(int i=1;i<=n;i++){
        int a=array[i];
        int b=array[i-1];
        if(pd==(a-b)){
            length+=1;
        }
        pd=a-b;

    }
    cout<<length<<" elements"<<endl;
    return 0;
}