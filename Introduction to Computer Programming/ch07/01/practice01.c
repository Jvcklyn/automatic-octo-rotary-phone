/*
파일명: practice01.c
만든이: 성호림
프로그램 내용: 두 정수를 입력받아 합을 출력하기

*/

#include <stdio.h>
#include <stdlib.h>
void add(const int a, const int b, int* p); // 함수 선언

void main() {
	int a, b;
	int result;
	int* ptr=&result; // result의 주소값을 저장할 포인터 ptr
	   
	printf("Enter two integers.\n");
	scanf("%d %d", &a, &b); // a b 입력받기
	add(a, b, ptr); // add 함수 호출
	   	  
	system("pause");
}

void add(const int a, const int b, int* p) {
	*p = a + b; // 간접 참조를 통하여 result에 a+b를 저장하는 효과
	printf("The sum is %d.\n", *p); // 결과 출력
}