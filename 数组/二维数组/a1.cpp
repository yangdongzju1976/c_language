#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	system("color 70");
    int i, j;  //��ά�����±�
    int sum = 0;  //��ǰ��Ŀ���ܳɼ�
    int average;  //��ƽ����
    int v[3];  //����ƽ����
    int a[5][3];  //��������ÿ��ͬѧ���Ƴɼ��Ķ�ά����
	srand((unsigned)time(NULL));
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            a[j][i]=rand()%100;  //����ÿ��ͬѧ�ĸ��Ƴɼ�
            sum += a[j][i];  //���㵱ǰ��Ŀ���ܳɼ�
        }
        v[i]=sum/5;  // ��ǰ��Ŀ��ƽ����
        sum=0;
    }
	printf("\n������Ƴɼ�\n\t\t\t\t\n");
	printf("\tѧ��\t��ѧ\tC����\tӢ��\n");
	for (i=0;i<5 ;i++ )
	{
		for (j=0;j<3 ;j++ )
		{
			if (j==0)
			{
				printf("\ta[%d][%d]\t%d",i,j,a[i][j]);	
			}
			else
			{
				printf("\t%d",a[i][j]);
			}
					
		}
		printf("\n");
	}
    average = (v[0] + v[1] + v[2]) / 3;
    printf("\tMath: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
    printf("\tTotal: %d\n", average);
    return 0;
}
/*
rand�����Ķ�����ǣ�������������ĳ�ʼ��������ͨ���Ǻ�rand�������ʹ�õġ�

����ԭ�ͣ�srand(unsigned seed)

�����е�time��NULL�������ؼ����Ŀǰ��ʱ����1970��1��1��0ʱ0��0��֮���ʱ����λ���롣

srand����Ҫunsigned int���ͣ���������ʹ��һ��ǿ������ת�������������ӵ����á�
*/