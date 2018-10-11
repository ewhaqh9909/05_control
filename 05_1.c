#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,answer;
	answer=33;
	
	do
	{
		printf("Guess a number:");
		scanf("%d",&a);
		if(a>answer)
		{
			printf("low!\n");
		}else if(a<answer)
		{
			printf("high!\n");
		}
	}while(a!=answer);
	printf("축하합니다!");
    
	return 0;
}
