#include <iostream>
using namespace std;
int main(){
    int n,m;
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
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter element to search: ";
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<"element found"<<endl;
                cout<<"row no.: "<<i+1<<" collumn no.: "<<j+1<<endl;
            }
        }
    }
    return 0;
}