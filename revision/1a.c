#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    double min, mid, max;
    scanf("%lf %lf %lf",&a,&b,&c);
	max=a;
    min=b;
 if( max < b) max = b;
 if( max < c ) max = c;
 if( min > a) min = a;
 if( min > c) min = c;   
 if((max==a||max==c)&&(min==c||min==a))mid=b;
 if((max==b||max==a)&&(min==b||min==a))mid=c;
 if((max==c||max==b)&&(min==b||min==c))mid=a;	
 	printf("%lf",min);
 	printf("\n");
 	 printf("%lf",mid);
 	 printf("\n");
	  printf("%lf",max);
 	 printf("\n");
 return 0;
}