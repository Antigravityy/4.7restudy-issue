#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define BOOK "War and Peace"
int main(void)
{
	float coast = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\n"
		, BOOK, coast);
	printf("That is %.0f%% of list.\n", percent);
	return 0;
}
