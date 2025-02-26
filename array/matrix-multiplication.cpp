#include <iostream>
using namespace std;
int main(){
    int row1,col1row2,col2;
    cout<<"enter n rows for 1st: ";
    cin>>row1;
    cout<<"enter ncol1 and row2: ";
    cin>>col1row2;
    cout<<"enter n cols for 2nd: ";
    cin>>col2;
    //1st array
    int arr1[row1][col1row2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1row2;j++){
            cout<<"enter element: ";
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
    //2nd array
    int arr2[col1row2][col2];
    for(int i=0;i<col1row2;i++){
        for(int j=0;j<col2;j++){
            cout<<"enter elemnt: ";
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
    //multiplication of 1st and 2nd
    int ans[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1row2;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"product matrix:-"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}