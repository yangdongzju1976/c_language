#include<stdio.h>  

int main() 
	{
    int score = 0;
    printf("\n请输入分数:");
    scanf("%d", &score);

		if(score<30)
			printf("\n低于30分，极差！");

		if(score<60&&score>=30)
			printf("大于30分，小于 60 分，不及格，较差   \n");

        if (score >= 60&&score <= 80)
            printf("分数大于60小于80，中等水平\n");
   
		if (score > 80 && score < 90) 
            printf("分数大于80小于90，成绩良好\n");
        
		if ( score >= 90) 	
            printf("分数大于90，成绩优秀\n");
        
   	return 0;
}