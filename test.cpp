#include<iostream>
#include <array>
using namespace std;

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

int main(){
    areaSwitchCase(2,{3,2});
}