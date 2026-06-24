#include<stdio.h>

int main(){
    int n ,j ,sum=0;
    printf("enter order of square matrix \n");
    scfanf("%d" , &n);

    int a[n][n];

    printf("enter matrix \n");
     for( int i=0;i<n;i++) 
      for( int j=0;j<n;j++)
      scanf("%d" , &a[i][j]);

       for( int i=0;i<n;i++)
       sum += a[i][j];
       
       printf("diagnal sum = %d" , sum);
    return 0;
}