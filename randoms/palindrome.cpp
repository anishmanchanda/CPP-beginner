#include <iostream>
using namespace std;
int main(){
    cout<<endl;
    cout<<"enter number of charecters in word: ";
    int n;
    cin>>n;
    char arr[n+1];
    cout<<"enter word: ";
    cin>>arr;
    bool flag=true;
    for(int i=0;i<n/2;i++){
        char check1=arr[i];
        char check2=arr[n-1-i];
        if(check1!=check2){
            cout<<"eneted word is NOT PALINDROME"<<endl;
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"entered word is PALINDROME"<<endl;
    }
    return 0;
}