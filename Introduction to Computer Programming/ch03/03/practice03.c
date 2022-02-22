/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: 3의 배수임을 판별하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num; // 입력받은 정수를 저장하기 위한 int형 변수
	int remainder; // 정수를 3으로 나눈 나머지를 저장하기 위한 int형 변수

	printf("양수를 하나 입력하십시오: ");
	scanf("%d", &num); // 정수 입력 받기
	
	if (num < 0) {
		printf("음수를 입력했습니다. \n"); // 입력받은 정수가 0 미만일 경우 출력
	}
	else if (num == 0) {
		printf("0을 입력했습니다. \n"); // 입력받은 정수가 0일 경우 출력
	}
	else {
		remainder = num % 3; // remainder에 입력받은 정수를 3으로 나눈 나머지 저장하기
		if (remainder == 0) {
			printf("3의 배수입니다. \n");  // 나머지가 0일 경우 출력
		}
		else {
			printf("3의 배수가 아닙니다. \n"); // 나머지가 0이 아닐 경우 출력
		}
	}
	system("pause");
	return 0;
}