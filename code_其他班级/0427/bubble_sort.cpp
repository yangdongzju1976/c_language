#include <stdio.h> 
//ð�ݷ�����
int main()
{ 
	int a[10],i,j,t;
  printf("��������10����:\n");
  
  for(i=0;i<10;i++) 
     scanf("%d",&a[i]);

  printf("\n"); 

  for(j=0;j<9;j++) //��ѭ��

     for(i=0;i<9-j;i++) //��ѭ��
        if(a[i]>a[i+1]) //����Ԫ�رȽ�
        {
			t=a[i]; 
			a[i]=a[i+1];
			a[i+1]=t;  //���a[i]��a[i+1]���򽻻���
		} 

	 printf("����С�����˳�����:\n");
	
	 for(i=0;i<10;i++)
     printf("%d\t",a[i]);

}