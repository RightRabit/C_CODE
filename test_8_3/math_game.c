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
		printf("�������:>");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С��\n");
		}
		else if (ret < guess)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ����������\n");
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
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
		while (input);
		return 0;

 }
