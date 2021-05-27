/* Swap two numbers without using third variable */
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the first number x =");
	scanf("%d", &x);
	printf("Enter the second number y = ");
	scanf("%d", &y);
	printf("First number before swapping = %d", x);
	printf("\nSecond number before swapping = %d",y);
	x= x+y;
	y= x-y;
	x= x-y;
	printf("\nFirst number after swapping x= %d ", x);
	printf("\nSecond number after swapping y= %d", y);
	return 0;
	
}
