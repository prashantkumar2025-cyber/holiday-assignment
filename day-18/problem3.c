#include<stdio.h>

int main(){
    int n,key;
    printf("enter size \n");
    scanf("%d" , &n);

    int arr[n];

    printf("enter shorted element \n");
     for( int i=0;i<n;i++)
     scanf("%d" , &arr[i]);

     printf("enter element to search \n");
     scanf("%d" , &key);

     int low = 0, high = n-1,mid;

     while(low <= high) {
        mid = (low + high) /2;

        if(arr[mid] == key) {
            printf("element found at index %d " , mid);
            return 0;

            
        }

        else if(arr[mid] < key)
        low = mid + 1;
        else
        high = mid - 1;
     }
     printf("element not found \n");
     
    return 0;
}