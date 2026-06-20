#include<stdio.h>

int main(){
    int n;
    printf("enter size \n");
    scanf("%d" ,&n);

    int arr[n];

    printf("enter elements \n");
    for(int i =0;i<n;i++)
    scanf("%d" , &arr[i]);

    printf("duplicate element \n");
    for(int i =0;i<n;i++) {
        int count = 1;

          for(int j = i +1;j<n;j++) {
            if(arr[i] == arr[j])
            count++;
          }
          int alreadyprinted = 0;
          for(int k =0;k<i;k++) {
             if(arr[i] == arr[k]) {
                alreadyprinted = 1;
                break;
             }
          }
          if(count > 1 && !alreadyprinted)
          printf("%d " , arr[i]);
          
    }
    return 0;
}