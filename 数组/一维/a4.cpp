#include <stdio.h>
#include <string.h>  //�ǵ������ͷ�ļ�
int main(){
    char str[] = "http://c.biancheng.net/cpp/u/jiaocheng/"; //���ַ�����������帳ֵ��
    long len = strlen(str); //ͨ��string.h��׼���еĺ���strlen()�������ĳ��ȡ�
    printf("���鳤���ǣ� %ld.\n", len);
    printf("\n��һ����ַ�\n");
	for (int i=0;i<len ;i++ )
	{
		printf("str[%d]=%c\t",i,str[i]);
		if ((i+1)%5==0)
		{
			printf("\n");
		}

	}
	printf("\n\n�����������:\nstr[]=%s",str);
	printf("\n\n\n");
    return 0;
}