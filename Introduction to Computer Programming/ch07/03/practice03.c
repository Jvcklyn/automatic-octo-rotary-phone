/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: n factorial을 계산하는 재귀 함수
*/
#include <stdio.h>
#include <stdlib.h>

void factorial(int n, int* p); // factorial 함수 선언

void main() {
	int n, result = 1;
	int* ptr=&result; // result의 주소를 저장하는 변수

	printf("Enter a natural number.\n");
	scanf("%d", &n);
	factorial(n, ptr); // factorial 함수 호출
	printf("%d factorial is %d.\n", n, *ptr);
	
	system("pause");
}

void factorial(int n, int* p) { // factorial 함수 정의
	if (n == 1)
		return;
	*p *= n;
	factorial(n - 1,p); // 재귀함수 호출
}