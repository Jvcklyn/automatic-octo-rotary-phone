/*
파일명: practice01.c
만든이: 성호림
프로그램 내용: 함수를 사용하여 두 개의 문자배열에 저장된 문자열을 서로 바꾸기
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_string(char* str1, char* str2) { // swap_string 함수 선언
	char swap[20]; // 문자열을 임시로 저장할 swap 배열
	strcpy(swap, str1); // strcpy로 str1을 swap에 복사
	strcpy(str1, str2); // strcpy로 str2를 str1에 복사
	strcpy(str2, swap); // strcpy로 swap를 str2에 복사
}

void main() {
	char str1[20] = "apple";
	char str2[20] = "banana";

	swap_string(str1, str2); // 함수를 호출하여 두 문자열을 바꾼다

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	system("pause");
}