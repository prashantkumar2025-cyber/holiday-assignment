#include<stdio.h>
    long long factorial(int n ) {
        if (n==0 || n==1)
        return 1;

        return n *  factorial(n-1 );
    }
    int main () {
        int n ;
        printf("enter a number \n");
        scanf("%d" , &n);

        printf("factorial of %d = %lld \n" , n,factorial(n));
        

    
    return 0;
}