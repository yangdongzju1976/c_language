#include <stdio.h>
int i=0,j=0; //ȫ�ֱ���
void hanoi(int n,char one,char two,char three);
void move(char  x, char  y);                      //����������
int main()
{ 
	
   int m;
   printf("����������:");
   scanf("%d",&m);
   printf("�Ʋ��Ĳ���%\n");
   hanoi(m,'A','B','C');
   printf("\n");
}

void hanoi(int n,char one,char two,char three)
{

	if(n==1)  
		move(one,three);
	else 
		{ 
			hanoi(n-1,one,three,two);  //�ؼ������У�
			move(one,three);
			hanoi(n-1,two,one,three);
		}
} 


void move(char  x, char  y)
{ 
	
	i++;
	j++;
	if (j<5)
	
		printf("��%d����%c--->%c\t",i,x, y);
	else
		{	printf("��%d����%c--->%c\t",i,x, y);
			j=0;
			printf("\n");
			
		}
	
	
}