/* Demo enumerated data type */
#include<stdio.h>
enum week{mon,tue,wed,thurs,fri,sat,sun};
int main()
{
	enum week day;
	day=sat;
	printf("%d",day);
	return 0;
}
