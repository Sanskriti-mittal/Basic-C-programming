/* Calculate distance between two cities in km and change it into meters, feets and inches */
#include<stdio.h>
#include<conio.h>
int main()
{
	float km,met,feet,inch;
	printf("Enter the distance between two cities in km");
	scanf("%f", &km);
	met= km*1000;
	feet=km*3280.84;
	inch=km*39370.1;
	printf("\nThe distance in m=%f", met);
	printf("\nThe distance in feet=%f",feet);
	printf("\nThe distance in inch=%f", inch);
	return (0);
	
	
}
