#include <stdio.h>
#include <limits.h>
//bubble sort
int main(){
    int n,temp;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int pos;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        }
        int temp=arr[i];
        arr[i]=min;
        arr[pos]=temp;


    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }


    return 0;
}