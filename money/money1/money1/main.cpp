#include <stdio.h>

int main()
{
	int a;
	int hour;
	int min;
	int sec;

	printf("enter the total time in seconds: ");
	scanf_s("%d", &a);

	hour = a / 3600;
	min = (a / 60) % 60;
	sec = a % 60;

	printf("%d seconds is %d hours %d minutes %d seconds.\n", a, hour, min, sec);
	printf("digital display: %02d: %02d: %02d\n", hour, min, sec);

	return 0;
}