#include<stdio.h>
#include<stdlib.h>

int re(int& xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}
int main()
{
	int x = 100;
	re(x);
	printf("x=%d\n", x);
	system("pause");
	return 0;
}