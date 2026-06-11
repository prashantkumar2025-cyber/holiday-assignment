#include<stdio.h>

int main(){
    int num , temp,digits = 0;
    int rem;
    int sum =0;
    printf("enter number \n");
    scanf("%d" , &num);
    temp = num;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while(temp>0) {
        rem = temp % 10;
        sum+= pow(rem,digits);
        temp /= 10;
    }
    if(sum == num)
    printf("armstrong number \n");
    else 
    printf("not armstrong number \n");
    
    return 0;
}