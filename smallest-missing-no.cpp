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
    int found;
    const int N=1e6+2;
    bool check[N];
    for (int i=0;i<N;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        
        int el=arr[i];
        if(el>=0){
            check[el]=true;
        }
    }
    for(int i=0;i<N;i++){
        if(check[i]==false){
            cout<<"missing element is: "<<i<<endl;
            break;
        }
    }
}