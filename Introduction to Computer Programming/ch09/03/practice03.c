/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: 키보드로부터 성과 이름을 따로 입력 받아서 하나의 문자열로 붙여서 출력하기
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char last_name[20]; // 성을 입력받을 배열 
	char first_name[20]; // 이름을 입력받을 배열
	char full_name[20] = { 0 }; // 합친 이름을 저장할 배열

	printf("성을 입력하시오. : ");
	scanf("%s", last_name);
	printf("이름을 입력하시오. : ");
	scanf("%s", first_name);
	
	strcat(full_name, last_name); // full_name에 last_name 더하기
	strcat(full_name, " "); // full_name에 공백 더하기
	strcat(full_name, first_name); // full_name에 first_name 더하기

	printf("성을 포함한 이름은 %s 입니다.\n", full_name);

	system("pause");
}

