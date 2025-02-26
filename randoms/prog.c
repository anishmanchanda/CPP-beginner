#include <stdio.h>

void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void swap1(int x,int y){
    int temp;
    temp=y;
    y=x;
    x=temp;
}
int main(){
    int a=10 ,b=20;
    printf("before swapping a=%d b=%d \n",a,b);
    //swap(&a,&b);
    swap1(a,b);
    printf("after swapping a=%d b=%d \n",a,b);
    return 0;

}