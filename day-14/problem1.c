#include<stdio.h>

int main(){
    int n,key,found =0;

    printf("enter size \n");
    scanf("%d" , &n);

    int arr[n];

    printf("enter elements \n");
    for(int i =0;i<n;i++)
    scanf("%d", &arr[i]);

    printf("enter element to search \n");
    scanf("%d" , &key);

for(int i =0;i<n;i++) {
    if(arr[i] == key) {
        printf("element found at position %d " , i+1 );
        found = 1;
        break;
    }
}
       if(!found)
       printf("element not found \n");
       
    return 0;
}