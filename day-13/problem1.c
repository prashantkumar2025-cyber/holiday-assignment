#include<stdio.h>

int main(){
    int n,i;

    printf("enter size of array \n");
    scanf("%d" , &n);

    int arr[n];

    printf("enter elements \n");
    for(i =0; i<n;i++) {
        scanf("%d" , &arr[i]);
    }

    printf("Array elements are \n");
    for(i=0;i<n;i++) {
        printf("%d " , arr[i]);
        
    }
    return 0;
}