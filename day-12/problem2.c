#include<stdio.h>
 int isArmstrong(int n) {
    int original = n , sum =0 , digit;

    while (n>0) {
        digit = n%10;
        sum += digit*digit*digit;
        n/=10;
    }
    return original == sum;
 }
int main(){
     int n;
     printf("enter a number \n");
     scanf("%d" , &n);

     if (isArmstrong(n))
     printf("Armstrong Number \n");
     else
     printf("not an Armstrtong number \n");
     
    return 0;
}