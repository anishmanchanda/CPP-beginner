//finding whether path to a certain coordinate in an array exists or not
//make an array with i rows and j collumns having 0 and 1 as values. 
//iff arr[i][j]==1 then j is reachable from i. if arr[i][j]==0 then j is not reachable from i.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of coordinates: ";
    cin>>n;
    int arr[n][n];
    //creating matrix
    for(int i=0,i<n,i++){
        for(int j=0,j<n,j++){
            cout<<"if "<<j<<"is reachable from "<<i<<"enter 1"<<endl;
            cin>>arr[i][j];
            if (arr[i][j]!=1){
                arr[i][j]==0;
            }
        }
    }
    //traversing matrix
    
    
}