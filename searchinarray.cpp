#include <iostream>
using namespace std;
//program to return index of element stored in array using func

int indexsearch(int arr[],int n,int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
            break; 
        }
    }
    return -1;
}
int main(){
    cout<<"enter no. of elements: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element: ";
        cin>>arr[i];
    }
    cout<<"enter element to search: ";
    int key;
    cin>>key;  
    cout<<"index of entered no.: "<<indexsearch(arr,n,key)<<endl;
    return 0; 
    
}