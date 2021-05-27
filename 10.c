/* Calculate Quotient and Remainder */
#include<stdio.h>
int main()
{
	int a,b,quotient,remainder;
	printf("Enter the value of a");
	scanf("%d", &a);
	printf("Enter the value of b");
	scanf("%d", &b);
	quotient= a/b;
	remainder=a%b;
	printf("Quotient of a and b= %d", quotient);
	printf("\nRemainder of a and b= %d", remainder);
	return 0;
}
