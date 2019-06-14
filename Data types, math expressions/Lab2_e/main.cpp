#include <stdio.h>

using namespace std;

int main()
{
    double a=1,b=2,c=3;
    printf("Please write the %.0lf edge\n",a);
    scanf("%lf",&a);
    printf("Please write the %.0lf edge\n",b);
    scanf("%lf",&b);
    printf("Please write the %.0lf edge\n",c);
    scanf("%lf",&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
	{
		printf("It is possible to build a triangle with these edges.\n");
	}else
	{
		printf("It is not possible to build a triangle with these edges.\n");	
	}
	return 0;
}