/* Calculate simple interest & Compound interest */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float P,R,T,SI,CI;
	printf("Enter the principal amount (P)");
	scanf("%f", &P);
	printf("\nEnter the rate in percent (R)");
	scanf("%f", &R);
	printf("\nEnter the time period in year (T)");
	scanf("%f", &T);
	SI= (P*R*T)/100;
	CI= P*(pow(1+R/100,T));
	printf("\nThe SI = %f", SI);
	printf("\nThe CI = %f", CI);
	return 0;
	
}
