#include <stdio.h>
#include <float.h>

int main()
{
	// Overflow
	
	//float max = 3.402823466e+38F;
	//printf("%f\n", max);

	//max = max * 100.0f;
	//printf("%f\n", max);

	//double max = 1.7976931348623158e+308;
	//printf("%f\n", max);

	//max = max * 100.0f;
	//printf("%f\n", max);

	// Under Flow

	float f = 1.401298464e-45F;
	printf("%e\n", f);

	f = f / 100.0f;
	printf("%e\n", f);

	return 0;
}