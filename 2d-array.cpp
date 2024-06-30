#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter no. of rows: ";
    cin>>n;
    cout<<"enter no. of collumns: ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}