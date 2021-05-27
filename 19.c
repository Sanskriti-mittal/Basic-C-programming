/* Calculate aggregrate of student marks */
#include<stdio.h>
int main()
{
	int subj1,subj2,subj3,subj4,subj5,subj6,Agg;
	printf("Enter the marks in subject 1=");
	scanf("%d", &subj1);
	printf("\nEnter the marks in subject 2=");
	scanf("%d", &subj2);
	printf("\nEnter the marks in subject 3=");
	scanf("%d", &subj3);
	printf("\nEnter the marks in subject 4=");
	scanf("%d", &subj4);
	printf("\nEnter the marks in subject 5=");
	scanf("%d", &subj5);
	printf("\nEnter the marks in subject 6=");
	scanf("%d", &subj6);
	Agg= subj1+subj2+subj3+subj4+subj5+subj6;
	printf("The aggregrate of student marks=%d", Agg);
	return (0);
}
