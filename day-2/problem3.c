#include<stdio.h>

int main(){
    int num ,digit;
    long long product =1;
    printf("enter a number \n");
    scanf("%d",&num);
    while (num !=0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    printf("product of digits = %lld \n" , product);
    
    return 0;
}