#include <iostream>
using namespace std;

int getBit(int n, int pos){
     return (n&(1<<pos)!=0);
}
int setBit(int n, int pos){
    return (n|(1<<pos));
}
int clearBit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);
}
int updateBit(int n,int pos,int value){//to update value at a certain position in a given binary no.
    int mask=~(1<<pos);
    n=n=n&mask;
    return (n|(value<<pos));    
}
int main(){
    return 0;
}