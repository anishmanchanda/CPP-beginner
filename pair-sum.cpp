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
    int k;
    cout<<"enter pair sum";
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        for(int j=0;j<n;j++){
            int el=arr[j];
            if(sum+el==k){
                if(j>i){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
                
            }
        }
        sum=0;
    }
}