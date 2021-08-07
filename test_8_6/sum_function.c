#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Add(int* p)
{
(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num); Add(&num);
	printf("num=%d\n", num);
	return 0;
}