//all elements must be sorted in increasing order
//time complexity can be better in such case
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
    
    cout<<"enter elemnt to search: ";
    int target;
    cin>>target;
    int row=0,col=m-1;
    bool flag=false;
    while(row<n && col>=0){
        
        if(arr[row][col]==target){
            cout<<"element found"<<endl;
            cout<<"row: "<<row+1<<"  col: "<<col+1<<endl;
            flag=true;
            break;
        }
        if(arr[row][col]>target){
            col--;
        }
        else{
            row++;
        }
    }
    if(flag==false){
        cout<<"entered element does not exist in matrix"<<endl;
    }
    return 0;

}