//BINARY SEARCH
//if elements in increasing order;faster search

#include<iostream>
using namespace std;
int fastsearch(int arr[],int n,int key){
    float mid=n/2;
    int cent=floor(mid);
    if(arr[cent]==key){
        return cent;
    }
    else if(arr[cent]>key){
        for(int i=0;i<cent;i++){
            if(arr[i]==key){
                return i;
                break;
            }
        }
    }
    else{
        for(int i=cent;i<n;i++){
            if(arr[i]==key){
                return i;
                break;
            }
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
    cout<<"index of entered element: "<<fastsearch(arr,n,key)<<endl;
    return 0;
}