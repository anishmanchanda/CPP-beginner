#include<iostream>
#include <array>
#include <climits>
using namespace std;
/*
double areaSwitchCase(int ch, vector<double> a) {
  switch (ch) {
  case 1:
    cout<<3.14*a[0]*a[0];
    return 3.14*a[0]*a[0];
  case 2:
	cout<<a[0]*a[1];
    return a[0]*a[1];
  }

}
*/
int main(){
    //areaSwitchCase(2,{3,2});
    int a[4]={3,4,5,2};
    int max=INT_MIN;
    int max2=INT_MIN;
    int min=INT_MAX;
    int min2=INT_MAX;
    int el;
    for(int i=0;i<5;i++){
        el=a[i];
        if(el<min){
            min=el;
        }
        if(el>max){
            max=el;
        }
    } 
    for(int i=0;i<5;i++){
        el=a[i];
        if(el>min && el<min2){
            min2=el;
        }

        if(el<max && el>max2){
            max2=el;
        }
    } 
    cout<<max2<<" "<<min2<<endl;
}