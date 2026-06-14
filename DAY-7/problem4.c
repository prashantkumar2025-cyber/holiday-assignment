#include<stdio.h>
      int reverse = 0;

      void reverseNumber(int n) {
        if (n==0)
        return;

        reverse = reverse*10 + (n%10);
        reverseNumber(n/10);
      } 
      int main(){
       int n ;
       
       printf("enetr a number \n");
       scanf("%d" , &n);

       reverseNumber(n);

       printf("reversed number = %d \n" , reverse);
       
    return 0;
}