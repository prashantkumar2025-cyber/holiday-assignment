#include<stdio.h>
   int isPrime(int n ) {
    if (n<=1)
    return 0;

    for (int i =2;i*i<=n;i++) {
        if (n%i == 0)
        return 0;
    }
    return 1;
   }
int main(){
    int n ;

    printf("enter a number \n");
    scanf("%d" , &n);

    if (isPrime(n))
    printf("prime number");
    else
    printf("not prime number \n");
    
    return 0;
}