#include <iostream>
#include <climits>
using namespace std;
int main(){
    cout<<"enter number of elements: ";
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements: ";
        cin>>array[i];
    }
    //lowest and highest possible values will be assigned 
    int maxno=INT_MIN;
    int minno=INT_MAX;
     
    for(int j=0;j <n;j++){
        int el=array[j]; 
        if(el>maxno){
            maxno=el;
        }
        if(el<minno){
            minno=el;
        }
    }
    cout<<"max is: "<<maxno<<endl;
    cout<<"min is: "<<minno<<endl;  
     
}