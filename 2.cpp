#define _CRT_SECURE_NO_WARNINGS
#define B "booboo"
#define X 10
#include<stdio.h>
int main(void)
{
	int age,xp;
		char name[40];
		printf("Please enter your first name.\n");
		scanf("%s", name);
		printf("All right, %s, what's your age?\n", name);
		scanf("%d", &age);
		xp = age + X;
		printf("That's a %s! You must be at least %d.\n", B, xp);
	return 0;
}