#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	char str[100];//string
	int a;
	a=0;
	printf("input a string:");
	
	
    while((c=getchar())!='\n')
    {
    	if('0'<=c&&c<='9')
    	{
    		a+=1;
		}else{
			a+=0;
		}
	}
	printf("The number of digits is %d",a);
    
	return 0;
}
