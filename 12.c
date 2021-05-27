/* Calculate area of rectangle */
#include<stdio.h>
int main()
{
	float l,b,ar;
	printf("Enter the lenth of rectangle");
	scanf("%f", &l);
	printf("Enter the breadth of rectangle");
	scanf("%f", &b);
	ar=l*b;
	printf("The area of rectangle= %f", ar);
	return 0;

}
