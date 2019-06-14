#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float R,x1,x2,y1,y2 ;
    
    const float Pi=3.14;
	printf("Please write the radius of the circle to compute : ");
	scanf("%f",&R);
	printf("\n");
	printf("The surface area of the circle with radius %.2f is equal %.2f , and it's circumference is equal %.2f\n\n\n\n",R,R*R*Pi,2*R*Pi);
	printf("Please input x coordinate of the first point : ");
	scanf("%f",&x1);
	printf("\nPlease input y coordinate of the first point : ");
	scanf("%f",&y1);
	printf("\nPlease input x coordinate of the second point : ");
	scanf("%f",&x2);
	printf("\nPlease input y coordinate of the second point : ");
	scanf("%f",&y2);
	printf("\nThe Cartesian distance betwen points (%.2f,%.2f) and (%.2f,%.2f) is equal : %f",x1,y1,x2,y2,sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))); 
	
	return 0;     
}