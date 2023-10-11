#include <stdio.h>

int main(void)
{
	int radius;
	float pi;

	pi = 3.142;

	printf("Enter the radius of the circle: ");
	scanf("%d", &radius);


	printf("The area of the given circle is: %f", pi * radius * radius);
	return (0);
}
