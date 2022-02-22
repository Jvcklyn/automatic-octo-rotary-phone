/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 입력밭은 문자의 아스키 코드 표시하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char letter; // 문자 하나를 저장할 char형 변수
	printf("문자 입력 : "); 
	scanf("%c", &letter); // char형 변수 letter에 입력받은 값을 저장 
	printf("%c문자의 아스키 코드 값은 %d입니다.", letter, letter); // 결과 출력

	system("pause");	   	 

	return 0;
}