#include<stdio.h>  

int main() 
	{
    int score = 0;
    printf("\n���������:");
    scanf("%d", &score);

		if(score<30)
			printf("\n����30�֣����");

		if(score<60&&score>=30)
			printf("����30�֣�С�� 60 �֣������񣬽ϲ�   \n");

        if (score >= 60&&score <= 80)
            printf("��������60С��80���е�ˮƽ\n");
   
		if (score > 80 && score < 90) 
            printf("��������80С��90���ɼ�����\n");
        
		if ( score >= 90) 	
            printf("��������90���ɼ�����\n");
        
   	return 0;
}