/*
파일명: practice01.c
만든이: 성호림
프로그램 내용: 세 정수를 입력받아 최대 최소 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

void min_max(int a, int b, int c); // 함수의 선언
int a, b, c, max, min; // a, b, c 입력받은 수를 저장하고 max, min은 최대 최소 저장할 정수형 변수


int main(void) {
	printf("Enter three integers.\n");
	scanf("%d %d %d", &a, &b, &c); // 입력 받기
	min_max(a, b, c); // 함수 호출
	printf("min is %d, max is %d.\n", min, max); // 출력
	system("pause");
	return 0;
}

void min_max(int a, int b, int c) { // 최대 최소를 구하는 함수
	if (a > b) {
		max = a;
		min = b;
		if (a > c)
			max = a;
		else
			max = c;
		if (b > c)
			min = c;
		else
			min = b;
	}
	else {
		max = b;
		min = a;
		if (b > c)
			max = b;
		else
			max = c;
		if (a > c)
			min = c;
		else
			min = a;
	}
}