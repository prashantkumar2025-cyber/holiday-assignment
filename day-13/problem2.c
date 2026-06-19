#include<stdio.h>

int main(){
    int n,i;
    int sum = 0;

    printf("enter size of array \n");
    scanf("%d" , &n);

    int arr[n];

    printf("enter elements \n");
    for(i =0;i<n;i++) {
        scanf("%d" , &arr[i]);
        sum += arr[i];
    }

    printf("sum = %d \n" , sum);
    printf("Average = %.2f \n" , (float)sum /n);
    
    return 0;
}