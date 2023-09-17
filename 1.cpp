#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(void)
{
	float weight, volume;
	int size, lettes;
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);
	lettes = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n",
		name, volume);
	printf("Also, your first name has %d lettes,\n",
		lettes);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}