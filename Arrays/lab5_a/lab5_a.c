#include <stdio.h>
#include <stdlib.h>

int main()
{
 const SIZE = 5;
 int A[SIZE],i;
 scanf( "%d" , &A[0] ) ;
 printf("A[1]=%4d\n",A[0]);
 scanf("%d",&A[1]); 
 printf("A[2]=%4d\n",A[1]);
 scanf("%d",&A[2]);
 printf("A[3]=%4d\n",A[2]);
 scanf("%d",&A[3]);
 printf("A[4]=%4d\n",A[3]);
 scanf("%d",&A[4]);
 printf("A[5]=%4d\n\n",A[4]);
 printf("array content in reverse order:\n\n");
 for(i=5;i>0;i--)
{
printf ("A[%d]=%4d\n",i,A[i-1]);
 fflush(stdin);	
}
 
 }