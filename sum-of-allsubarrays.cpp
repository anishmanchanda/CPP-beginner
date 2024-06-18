#include <iostream>
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++){
            sum=+array[j];
            cout<<sum<<endl;
            
        }
    }
    return 0;
    
}