#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<q<<endl;
    //q stores address  of pointer p
    cout<<*q<<endl;
    cout<<**q<<endl;
    //*q will print value of p pointer
    // **q will have value of a
    //we can hence dereferance a pointer n number of times
}