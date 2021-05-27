/* Find the area and circumference of circle */
#include<stdio.h>
int main()
{
	int rad;
	float pi=3.14,ar,cf;
	printf("Enter the radius of circle=");
	scanf("%d", &rad);
	ar= pi*rad*rad;
	printf("\nArea of circle=%f",ar);
	cf= 2*pi*rad;
	printf("\nCircumference of circle=%f", cf);
	return 0;
	
}
