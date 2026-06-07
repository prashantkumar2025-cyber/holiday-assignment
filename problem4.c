#include<stdio.h>

int main(){
    int n,count=0;

    printf("enter a number");
    scanf("%d",&n);
    if(n==0) {
        count =1;
    }
    else{
        while(n!=0) {
            count++;
            n/=10;
        }
    }
    printf("number of digits = %d" , count);
    return 0;
}