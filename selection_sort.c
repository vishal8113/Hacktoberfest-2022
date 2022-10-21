#include<stdio.h>
int main(){
    int temp,x,n,arr[20],i,j,minindex;
    printf("How many numbers wants in array:");
    scanf("%d",&n);
    printf("Enter %d numbers of array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        minindex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    printf("Sorted array:");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}