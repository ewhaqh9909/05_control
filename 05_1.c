#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	
	printf("input a char:");
	scanf("%c",&ch);
	
	if('0'<=ch&&ch<='9')
	{
		printf("�����Դϴ�.");
	 }else if('A'<=ch&&ch<='Z')
	 {
	 	printf("�빮���Դϴ�.");
	 }else if('a'<=ch&&ch<='z')
	 {
	 	printf("�ҹ����Դϴ�.");
	 }else
	 {
	 	printf("��Ÿ �����Դϴ�.");
	  } 
	return 0;
}
