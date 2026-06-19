#include<stdio.h>

int main(){
    int n,i;
    int even =0,odd=0;

    printf("enter size of array \n");
    scanf("%d" , &n);

    int arr[n];

    printf("enter elements \n");
    for(i=0;i<n;i++) {
        scanf("%d" , &arr[i]);
    }

     for(i=0;i<n;i++) {
        if(arr[i] % 2 == 0)
        even++;
        else
        odd++;
     }
     printf("even elements = %d \n" , even);
     printf("odd elements = %d \n" , odd);
     
    return 0;
}