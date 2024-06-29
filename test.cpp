#include<iostream>
#include <array>
using namespace std;
int main(){
    int array[]={10,20,30,40,50};
    int n=sizeof(array)/sizeof(array[0]);
    cout<<n<<endl;
}