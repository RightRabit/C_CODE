#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int ret = 0;
	ret = rand()%100+1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了\n");
		}
		else if (ret < guess)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜您，猜中了\n");
			break;
		}


	}

}
void menu()
{
	int guess = 0;
	printf("****************************\n");
	printf("***** 1.play    0.exit *****\n");
	printf("****************************\n");
}
int main()
{
	srand((unsigned int) time (NULL));
	int input=0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
		while (input);
		return 0;

 }
