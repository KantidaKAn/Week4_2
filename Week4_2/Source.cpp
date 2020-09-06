#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year;
	scanf("%d", &year);
	 if (year >= 0)
	{
		printf("%d", year + 543);
	}
	else if (year < 0) 
	{
		printf("Please insert number that is greater or equal zero");
	}
	return 0;
}