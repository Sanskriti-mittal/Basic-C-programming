/* Calculate sum, subtract, multiplication, division and average in one program */
#include<stdio.h>
int main()
{
	float a,b,sum,sub,multi,div,avg;
	printf("Enter the value of a");
	scanf("%f",&a);
	printf("Enter the value of b");
	scanf("%f", &b);
	sum= a+b;
	sub= a-b;
	multi= a*b;
	div= a/b;
	avg= (a+b)/2;
	printf("The addition is= %.3f", sum);
	printf("\nThe subtraction is= %f", sub);
	printf("\nThe multiplication is=%f", multi);
	printf("\nThe division is= %f", div);
	printf("\nThe average is= %.3f", avg);
	return 0;
}
