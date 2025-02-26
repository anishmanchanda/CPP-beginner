#include <iostream>
#include <climits>
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
    int S=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
        }
        if(sum>S){
            S=sum;
        }
    }
    cout<<"maximum sum is: "<<S<<endl;

}