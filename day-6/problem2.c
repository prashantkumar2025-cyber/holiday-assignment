#include<stdio.h>

int main(){
    long long binary;
    int decimal = 0 , base =1 , rem;

    printf("enter a binary number \n");
    scanf("%lld" , &binary);

    while(binary > 0)  {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("decimal = %d " , decimal);
    
    return 0;
}