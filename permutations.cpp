#include <iostream>
using namespace std;
//given array of distinct integers, return all possible permutations. any order
//swap every element from each index starting from end.
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=factorial(n); 

    return 0;
}
