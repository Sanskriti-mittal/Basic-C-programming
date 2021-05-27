/* To seperate decimal and intetger part of given floating point number */
#include<stdio.h>
int main()
{
	float a,b;
	int c;
	printf("Enter a number=");
	scanf("%f", &a);
	c=(int)a;
	b=c-a;
	printf("\nInteger part=%d \nDecimal part=%f",c,b);
	return 0;
}
