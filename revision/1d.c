#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("task 1d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
	if(((a==b)&&(c==d))||((a==c)&&(b==d))||((c==b)&&(a==d))) printf("there are two pairs");
	else if((a==b)||(a==c)||(a==d)||(b==c)||(b==d)||(c==d)) printf("pair");
	else printf("there is no pairs");
    return 0;
}