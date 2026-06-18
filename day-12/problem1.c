#include<stdio.h>
  int isPalindrome(int n) {
    int original = n  , reverse =0, digit;

    while (n>0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n/= 10;
    }
    return original == reverse;
  }
int main(){
    int n;

    printf("enter a number \n");
    scanf("%d" , &n);

    if ( isPalindrome(n))
    printf("Palindrome Number \n");
    
    else
    printf("not a Palindrome number \n");
    
    return 0;
}