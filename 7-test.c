#include <stdio.h>

int areaOfRect(int length, int breadth)
{
	int area;
	area = length * breadth;
	return area;
}

int main()
{
	int l = 5, b = 10;
	int area;

	area = areaOfRect(l, b);
	printf("%d\n", area);
	return area;
}


