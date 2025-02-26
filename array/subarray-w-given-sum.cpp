//finding the subarray with sum of elements as input
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cout<<"enter element: ";
        cin>>arr[i];
    }
    int S;
    cout<<"enter sum: ";
    cin>>S;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==S){
                cout<<"from: "<<i+1<<"th till: "<<j+1<<"th  element of array"<<endl;
            }
        }
    }
    return 0;
}