#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pytanie;
	float sum,average,maximum=0,minimum=0,ammount=0,number;
		do
		{
			printf("Enter the number\n");
    		fflush(stdin);
			scanf("%f",&number);
			if(ammount==0)
			{
			minimum = number;
			maximum= number;
			}
			sum+=number;
			ammount++;	
			if(number>maximum)
			{
			maximum= number;
			}
			if(minimum>number)
			{
				minimum=number;
			}
			fflush(stdin);
			printf("Do you want to finish?(Y'\'N)\n");	
			scanf("%c", &pytanie);
		}
		while(pytanie!='y' && pytanie!='Y');
		average=sum/ammount;
		printf("average:%f",average);
		printf("maximum:%f",maximum);
		printf("minimum:%f",minimum);



	return 0;
}