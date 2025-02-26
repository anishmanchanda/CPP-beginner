#include <iostream>
using namespace std;
int main(){
    char arr[100]="Apple";
    int i=0;
    while (arr[i]!='\0'){ // \0 is none 
        cout<<arr[i]<<endl;
        i++;
    } 
    //input char array
    cout<<"enter no. of charecters in word: ";
    int n;
    cin>>n;
    char array[n+1];
    cout<<"input charecter array word: ";
    cin>>array;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}