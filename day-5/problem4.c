#include<stdio.h>

int main(){
    long long n;
    long long largestprime = -1;

    printf("enter a number \n");
    scanf("%lld",&n);
     
    while(n%2 ==0) {
        largestprime = 2;
        n/=2;
    }
    for(long long i =3; i*i <= n ; i+=2) {

        while(n%i == 0) {
            largestprime = i;
            n/=i;
        }
    }
     if(n>2)
     largestprime = n;

     printf("largest prime factor = %lld " , largestprime);
     
    return 0;
}