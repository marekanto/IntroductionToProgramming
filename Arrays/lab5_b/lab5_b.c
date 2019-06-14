#include <stdio.h>
#include <stdlib.h>

int main()
{
 const SIZE = 5;
 int A[SIZE],i,sum=0,average,mse,sd=0,maximum=0,minimum;
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
 printf("\n\n");
 for(i=SIZE;i>0;i--)
{
 sum=sum+A[i-1];

 }

 for(i=0;i<SIZE;i++)
{
if(A[i]>maximum)
 {
	 maximum=A[i];
 }
 if(A[i]<minimum)
 {
	 minimum=A[i];
 }
 }
 
 
 average=sum/SIZE;
 for(i=SIZE;i>0;i--)
	{
 		sd=sd+(A[i-1]-average)*(A[i-1]-average);
	}
 mse=sd/SIZE;
 printf("sum=%d\n",sum);
 printf("average=%d\n",average);
 printf("Mean Squared Error=%d",mse);
 printf("maximum=%d",maximum);
 printf("minimum=%d",minimum);
 }