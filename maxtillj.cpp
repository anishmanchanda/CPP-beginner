#include<iostream>
#include <climits>
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
    int mx=INT_MIN;
    for(int i=0;i<=n;i++){
        mx=max(mx,array[i]);
        cout<<mx<<endl;
    }
    
}