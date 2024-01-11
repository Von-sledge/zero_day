#include <stdio.h>

int a = 9;

int main()
{
	extern int a;

	printf("%d\n", a);
	return 0;
}
