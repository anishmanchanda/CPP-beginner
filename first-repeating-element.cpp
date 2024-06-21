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
    const int N=1e6+2; //const keyword wont allow change in value of N ; 1e6+2=10^6 +2
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1; 
    }
    int minidx=INT_MAX;  
    for(int i=0;i<n;i++){
        int el=arr[i];
        if(idx[el]!=-1){
            minidx=min(minidx,idx[el]);
        }
        else{
            idx[el]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"min index is: "<< minidx+1<<endl; 
    }
    return 0;
}