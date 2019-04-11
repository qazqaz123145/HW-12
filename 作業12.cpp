#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int qqq,space,QQQ,num;
	
	printf("請輸入倒三角形的高:\n");
	scanf("%d",&num);
	for(qqq=num;qqq>=1;qqq--)
	{
		for(space=1;space<=num;space++)
		{
			if(num-qqq>=space)
				printf(" ");
			else
				break;
		}
		for(QQQ=qqq;QQQ>=1;QQQ--)
			printf("△");
		printf("%\n");
	}
	system("pause");
	return 0;
}
