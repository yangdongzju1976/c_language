#include <stdio.h>
int dif(int x,int y,int z);
int max(int x,int y,int z);
int min(int x,int y,int z);
int  main()
{ 
	int a,b,c,d;
	printf("输入三个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	d=dif(a,b,c);
	printf("最大数与最小数的差是：%d\n",d);
}
int dif(int x,int y,int z)
{ 
	return max(x,y,z)-min(x,y,z); 
}
int max(int x,int y,int z)
{ 
	int r;
	r=x>y?x:y;
	return(r>z?r:z);
}
int min(int x,int y,int z)
{ 
	int r;
	r=x<y?x:y;
	return(r<z?r:z);
}
