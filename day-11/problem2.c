#include<stdio.h>
   int maximum(int a , int b) {
    if(a>b)
    return a;
    return b;
   }
int main(){
    int a,b;

    printf("enter two numbers \n");
    scanf("%d%d" , &a,&b);

    printf("Maximum = %d" , maximum(a,b));
    return 0;
}