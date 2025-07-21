#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f
#define AI_NAME "Friday"
//#define PI = 3.141592f

int main()
{
	float radius, area, circum;

	printf("I'm %s.\n", AI_NAME);
	printf("Input radius\n");
	
	scanf("%f", &radius);

	area = PI * radius * radius;
	circum = 2.0 * PI * radius;

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	return 0;
}