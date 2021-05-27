/* Calculate the sum of first and last digit of given 4 digit number */
#include<stdio.h>
int main()
{
	int num,firstdigit,lastdigit,sum;
	printf("Enter a 4 bit number");
	scanf("%d", &num);
	firstdigit= num/1000;
	lastdigit= num%10;
	printf("\nFirst digit=%d", firstdigit);
	printf("\nLast digit=%d", lastdigit);
	sum= firstdigit+ lastdigit;
	printf("\nSum of first and last digit of number=%d", sum);
	return (0);
	
}
