#include<stdio.h>

int main(){
    int r,c;

    printf("enter row and coloumn \n");
    scanf("%d%d" , &r,&c);

    int a[r][c];

    printf("enter matrix \n");
      for( int i=0;i<r;i++) 
      for( int j=0;j<c;j++)
      scanf("%d" , &a[i][j]);

      printf("transpose matrix \n");
      
       for( int i=0;i<r;i++) 
      for( int j=0;j<c;j++)
      printf("%d" , a[j][i]);
      printf(" \n");
      
          return 0;
}