#include <iostream>
#include <vector>
using namespace std;
//USE XOR, 1^1=0, 0^0=0, 1^0=1, 0^1=0
//number req is xor of entire input array/vec
int main(){
    int n;
    vector <int> nums;
    cin>>n;
    int el;
    for(int i=0;i<n;i++){
        cin>>el;
        nums.push_back(el); // Corrected line
    }
    int ans=0;
    for(int val:nums){
        ans = ans ^ val;
    }
    cout<<"unique number is: "<<ans<<endl;

    return 0;
}
