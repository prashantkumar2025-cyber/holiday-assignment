#include<stdio.h>

int main(){
     int n,key , count =0;

     printf("enter size \n");
     scanf("%d" , &n);

     int arr[n];

     printf("enter elements \n");
     for(int i =0;i<n;i++)
     scanf("%d" , &arr[i]);

     printf("enter element \n");
     scanf("%d" , &key);

       for(int i =0;i<n;i++) {
       if(arr[i] == key)
       count++;
       }
       printf("frequency of %d  = %d" ,key,count  );
       
    return 0;
}