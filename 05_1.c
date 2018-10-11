#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	
	printf("input a char:");
	scanf("%c",&ch);
	
	if('0'<=ch&&ch<='9')
	{
		printf("숫자입니다.");
	 }else if('A'<=ch&&ch<='Z')
	 {
	 	printf("대문자입니다.");
	 }else if('a'<=ch&&ch<='z')
	 {
	 	printf("소문자입니다.");
	 }else
	 {
	 	printf("기타 글자입니다.");
	  } 
	return 0;
}
