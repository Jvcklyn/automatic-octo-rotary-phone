/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 세 정수를 입력받아 cyclic swap으로 변수에 저장된 값을 바꾸기
*/


#include <stdio.h>
#include <stdlib.h>

void cyclic_swap(int* a, int* b, int* c); // cyclic swap 함수 선언 

int main(void) {
	int a, b, c;
	int* pa = &a; //포인터 변수 pa, pb, pc 선언 
	int* pb = &b;
	int* pc = &c;

	printf("Enter three integers a, b, c.\n");
	scanf("%d %d %d", &a, &b, &c); // a, b, c 입력 받기
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c);
	cyclic_swap(pa, pb, pc); // cyclic swap 함수 호출
	printf("After cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c); // 결과 출력

	system("pause");
}

void cyclic_swap(int* a, int* b, int* c) { // cyclic 함수의 정의
	int temp; // 임시적으로 수를 저장할 temp 변수

	temp = *a; // temp에 참조를 이용하여 a값을 저장
	*a = *b; // 같은 방법으로
	*b = *c; // 각 변수에 값을 다르게 저장
	*c = temp; // 마지막으로 c에 temp값(a)를 저장
}