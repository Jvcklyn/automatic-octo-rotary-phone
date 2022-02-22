/*
파일명: practice04.c
만든이: 성호림
프로그램 내용: 윤년임을 판단하기
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int year; // 입력받은 연도를 저장할 int형 변수
	printf("연도 입력: ");
	scanf("%d", &year); // 연도 입력 받기

	((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? printf("윤년입니다.") : printf("윤년이 아닙니다.");
	// 윤년임을 판단하기 (4의 배수이며 100의 배수가 아니지만 400의 배수인 것들), 그 후 결과 출력

	printf("\n");

	system("pause");

	return 0;
}