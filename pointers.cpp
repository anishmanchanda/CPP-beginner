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
     
    *aptr=20;
    cout<<a<<endl;
    int arr[]={10,20,30};
    cout<<"pointer array: "<<*arr<<endl;
    //will print 0th element of array 
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl; 
        cout<<*(arr+i)<<endl;
        // arr++ is illegal, cant increment pointer array 
        //arr is indexing pointer, incrementing it takes it to next index.
        ptr++;
        //ptr++ to take it to the next element
    }
    return 0;
}