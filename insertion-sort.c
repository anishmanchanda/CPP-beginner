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
    for(int i=1;i<n;i++){
        temp=arr[i];
        int j=i-1;
        while((arr[j]>temp)&&(j>=0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("sorted array: \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
    
    
}
