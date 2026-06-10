#include<stdio.h>

int main(){
    int start , end , i , isprime ,j;

    printf("enter starting number \n");
    scanf("%d" , &start);
    
     printf("enter ending number \n");
    scanf("%d" , &end);

    printf("prime number between %d and %d are  \n" , start,end);
    for (i=start ; i<=end ; i++) {
        if (i<=1)
        continue;
        isprime =1;
        for(j=2;j<=i/2;j++) {
            if (i%j ==0) {
                isprime =0;
                break;
            }
        }
        if (isprime)
        printf("%d",i);
    }
    
    return 0;
}