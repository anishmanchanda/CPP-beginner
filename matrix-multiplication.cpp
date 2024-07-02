#include <iostream>

using namespace std;
int main(){
    cout<<"enter data for matrix 1:-"<<endl;
    int row1,col1;
    cout<<"enter no. of rows: ";
    cin>>row1;
    cout<<"enter no. of collumns: ";
    cin>>col1;
    int arr1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<"enter element: ";
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
    cout<<"enter data for matrix 2:-"<<endl;
    int row2,col2;
    cout<<"enter no. of rows: ";
    cin>>row2;
    cout<<"enter no. of collumns: ";
    cin>>col2;
    int arr[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<"enter element: ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    //multiplication of entered matrices
    
    
    return 0;
}