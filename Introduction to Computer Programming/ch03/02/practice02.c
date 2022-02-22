/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 정수를 입력받아 제곱값을 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num; // 입력받은 정수를 저장할 int형 변수
	printf("한 개의 정수 입력: ");
	scanf("%d", &num); // 정수 입력 받기

	printf("%d \n", num*num); // 제곱값 출력하기
	system("pause");

	return 0;
}