#include <stdio.h>
int main(){
    int arr[6]={5,1,6,2,4,3};
    int num;
    printf("enter element to search: ");
    scanf("%d",&num);

    int first=0;
    int last=5;
    int mid=(first+last)/2;
    while(last>first){
        if (arr[mid]==num){
            printf("position is: %d",mid);
            break;
        }
        else if(arr[mid]<num){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    if(first>last){
        printf("not found");
    }

    return 0;
}