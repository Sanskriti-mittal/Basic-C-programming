/* Convert temprature Fahrenheit to celsius */
#include<stdio.h>
int main()
{ 
   float C,F;
   printf("Enter the temprature in F ");
   scanf("%f", &F);
   C= (F-32)*5/9;
   printf("\nTemprature in C= %f", C);
return 0;
}
