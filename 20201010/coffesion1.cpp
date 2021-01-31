#include<windows.h> //sleep()让进程暂停执行一段时间
#include<stdio.h>
#include "stdlib.h" //system()指定的命令名称或程序名称传给要被命令处理器执行的主机环境，并在命令完成后返回。
#define stoptimeshort 40
#define stoptimelong 100


int main()
{
	char ch[10];
	int f[9][36] =
	{
		0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0,
		0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0
	};
	int s[9][21] =
	{
		0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0,
		0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
		1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1,
		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1,
		0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
		0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0,
		0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
	};
	int t[9][22] =
	{
		0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0,
		0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0,
		1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
		1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0,
		0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0,
		0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
	};
	system("title I Love You");
	system("pause");//system("dir \\");

	printf("%s", " ");
	Sleep(stoptimelong);
	printf("%s", "其");
	Sleep(stoptimeshort);
	printf("%s", "实\n");

	printf("%s", " ");
	system("color 72");
	/*
 0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White
color 72 7:背景色 ，2：前景色。
*/
	Sleep(stoptimelong);
	printf("%s", "有");
	Sleep(stoptimeshort);
	printf("%s", "一");
	Sleep(stoptimeshort);
	printf("%s", "句");
	Sleep(stoptimeshort);
	printf("%s", "话\n");

	printf("%s", " ");
	system("color 79");
	Sleep(stoptimelong);
	printf("%s", "一");
	Sleep(stoptimeshort);
	printf("%s", "直");
	Sleep(stoptimeshort);
	printf("%s", "藏");
	Sleep(stoptimeshort);
	printf("%s", "在");
	Sleep(stoptimeshort);
	printf("%s", "我");
	Sleep(stoptimeshort);
	printf("%s", "心");
	Sleep(stoptimeshort);
	printf("%s", "里\n");

	printf("%s", " ");
	system("color 7c");
	Sleep(stoptimelong);
	printf("%s", "可");
	Sleep(stoptimeshort);
	printf("%s", "是\n");

	printf("%s", " ");
	system("color 7d");
	Sleep(stoptimelong);
	printf("%s", "我");
	Sleep(stoptimeshort);
	printf("%s", "没");
	Sleep(stoptimeshort);
	printf("%s", "有");
	Sleep(stoptimeshort);
	printf("%s", "勇");
	Sleep(stoptimeshort);
	printf("%s", "气");
	Sleep(stoptimeshort);
	printf("%s", "对");
	Sleep(stoptimeshort);
	printf("%s", "你");
	Sleep(stoptimeshort);
	printf("%s", "说\n");

	printf("%s", " ");
	system("color 7e");
	Sleep(stoptimelong);
	printf("%s", "今");
	Sleep(stoptimeshort);
	printf("%s", "天\n");

	printf("%s", " ");
	system("color 7a");
	Sleep(stoptimelong);
	printf("%s", "我");
	Sleep(stoptimeshort);
	printf("%s", "终");
	Sleep(stoptimeshort);
	printf("%s", "于");
	Sleep(stoptimeshort);
	printf("%s", "鼓");
	Sleep(stoptimeshort);
	printf("%s", "起");
	Sleep(stoptimeshort);
	printf("%s", "勇");
	Sleep(stoptimeshort);
	printf("%s", "气\n");

	printf("%s", " ");
	system("color 7b");
	Sleep(stoptimelong);
	printf("%s", "我");
	Sleep(stoptimeshort);
	printf("%s", "要");
	Sleep(stoptimeshort);
	printf("%s", "对");
	Sleep(stoptimeshort);
	printf("%s", "你");
	Sleep(stoptimeshort);
	printf("%s", "说:\n");

	printf("%s", " ");
	system("color 79");
	Sleep(stoptimelong);
	printf("%s", "我");
	Sleep(stoptimeshort);
	printf("%s", "…\n");

	printf("%s", " ");
	system("color 72");
	Sleep(stoptimelong);
	printf("%s", "我");
	Sleep(stoptimeshort);
	printf("%s", "…");
	Sleep(stoptimeshort);
	printf("%s", "…\n\n");

	Sleep(stoptimelong);
	system("color fc");//f:背景色 c:前景色。

	for (int i = 0; i < 9; i++)
	{
		
		 printf(" ");
		for (int j = 0; j < 36; j++)
		{
			if (f[i][j] == 0)
				printf(" ");
			else
				printf("*");
		}
		//cout << endl;
		printf("\n");
		Sleep(100);
	}

while (1)
{

	printf("%s", "  \n");
	Sleep(stoptimelong);
	printf("%s", "你");
	Sleep(stoptimeshort);
	printf("%s", "愿");
	Sleep(stoptimeshort);
	printf("%s", "意");
	Sleep(stoptimeshort);
	printf("%s", "接");
	Sleep(stoptimeshort);
	printf("%s", "受");
	Sleep(stoptimeshort);
	printf("%s", "我");
	Sleep(stoptimeshort);
	printf("%s", "吗");
	Sleep(stoptimeshort);
	printf("%s", "?(Y/N)");

	printf("\n");//换行
	printf(" ");
	scanf("%s",ch);
	Sleep(stoptimelong);

	if (ch[0] == 'y' || ch[0] == 'Y')
	{
		system("color fc");
		printf("%s", "\n");
		for (int i = 0; i < 9; i++)
		{
			printf(" ");
			for (int j = 0; j < 21; j++)
			{
				if (s[i][j] == 0)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
			Sleep(100);
		}
		Sleep(3000);
		break;
	}
	else
	{
		if (ch[0] == 'n' || ch[0] == 'N')
		{
			system("color 0f");
			for (int i = 0; i < 9; i++)
			{
				printf(" ");
				for (int j = 0; j < 22; j++)
				{
					if (t[i][j] == 0)
						printf(" ");
					else
						printf("*");
				}
				printf("\n");
				Sleep(100);
			}
			printf("%s", " ");
			Sleep(stoptimelong);
			printf("%s", "心");
			Sleep(stoptimeshort);
			printf("%s", "碎");
			Sleep(stoptimeshort);
			printf("%s", "了");
			Sleep(stoptimeshort);
			printf("%s", "……\n");
			break;
		}
		
		//system("color 0f");
		//system("pause");
	}
}
	system("color f0");
	system("pause");
	return 0;
	
}