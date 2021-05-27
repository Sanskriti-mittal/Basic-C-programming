/* Calculate gross salary of a person */
#include<stdio.h>
int main()
{
	float Basic,gross,Da,Ta;
	printf("Enter the salary of the person");
	scanf("%f", &Basic);
	Da=Basic*0.10;
	Ta=Basic*0.15;
	gross=Ta+Da+Basic;
	printf("\nThe gross salary of the person=%f",gross);
	return (0);
}
