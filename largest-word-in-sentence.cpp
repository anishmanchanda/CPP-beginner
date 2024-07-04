#include <iostream>
using namespace std;
int main(){
   cout<<endl<<"enter no. of chars: ";
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"enter array: ";
    cin.getline(arr,n);
    cin.ignore();
    //this helps to input entire sentence
    int i=0;
    int st=0,maxst=0,max=0,currL=0;
    while(1){
        if((arr[i] == ' ')||(arr[i]=='\0')){
            if(currL>max){
                max=currL; 
                maxst=st;
            }
            currL=0;
            st=i+1;
        }
        else{
            currL++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<"max length is: "<<max<<endl;
    for(int i=0;i<max;i++){
        cout<<arr[i+maxst];
    }
    cout<<endl;
    return 0; 
}