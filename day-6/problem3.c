#include<stdio.h>

int main(){
     int n , count =0;
     printf("enter a number \n");
     scanf("%d" , &n);

     while(n>0) {
        count += n &1 ;
        n >>= 1;
     }
     printf("number of set bits = %d " , count);
     
    return 0;
}