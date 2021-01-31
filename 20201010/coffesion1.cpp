#include<windows.h> //sleep()�ý�����ִͣ��һ��ʱ��
#include<stdio.h>
#include "stdlib.h" //system()ָ�����������ƻ�������ƴ���Ҫ���������ִ�е���������������������ɺ󷵻ء�
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
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "ʵ\n");

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
color 72 7:����ɫ ��2��ǰ��ɫ��
*/
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "һ");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��\n");

	printf("%s", " ");
	system("color 79");
	Sleep(stoptimelong);
	printf("%s", "һ");
	Sleep(stoptimeshort);
	printf("%s", "ֱ");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��\n");

	printf("%s", " ");
	system("color 7c");
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��\n");

	printf("%s", " ");
	system("color 7d");
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "û");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "˵\n");

	printf("%s", " ");
	system("color 7e");
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��\n");

	printf("%s", " ");
	system("color 7a");
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��\n");

	printf("%s", " ");
	system("color 7b");
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "Ҫ");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "˵:\n");

	printf("%s", " ");
	system("color 79");
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��\n");

	printf("%s", " ");
	system("color 72");
	Sleep(stoptimelong);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��\n\n");

	Sleep(stoptimelong);
	system("color fc");//f:����ɫ c:ǰ��ɫ��

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
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "Ը");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "��");
	Sleep(stoptimeshort);
	printf("%s", "?(Y/N)");

	printf("\n");//����
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
			printf("%s", "��");
			Sleep(stoptimeshort);
			printf("%s", "��");
			Sleep(stoptimeshort);
			printf("%s", "��");
			Sleep(stoptimeshort);
			printf("%s", "����\n");
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