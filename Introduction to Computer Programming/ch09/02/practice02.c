/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 두 개의 문자 배열에 저장된 문자열 중에서 길이가 긴 문자열을 출력
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str1[20] = "Long time no see.";
	char str2[20] = "What's up?";

	if (strlen(str1) > strlen(str2)) // str1의 길이가 str2보다 길다면
		printf("%s\n", str1); // str1 출력
	else // str2의 길이가 str1보다 길다면
		printf("%s\n", str2); // str2 출력

	system("pause");
}


