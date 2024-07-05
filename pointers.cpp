#include <iostream>
using namespace std;
int main(){
    int a=10;
    int*aptr;// int* because int type variable. if bool type then bool*aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl; //will print value of a
    //*aptr is original vaerile (a)
    //&a is address of a
    *aptr=20;
    cout<<a<<endl;
    return 0;
}