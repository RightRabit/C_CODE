#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a= b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d", ret);
	return 0;
}