#include<stdio.h>

int main(){
    int i ,n ;
    int fib[100];

    printf("enter a number of term \n");
    scanf("%d" , &n);

    fib[0] = 0;
    fib[1] = 1;

    for (i=2 ; i<n ; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("reverse fibonacci series \n");
    
    for ( i =n-1 ; i>=0;i--) {
        printf("%d" , fib[i]);
        
    }
    return 0;
}