/*
파일명: practice04.c
만든이: 성호림
프로그램 내용: 자연수 a, b에 대해 a의 b제곱을 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, num=1, i; // 입력받을 자연수 a, b와 곱셈의 결과를 저장할 변수 num 그리고 반복문 변수 i
	printf("Enter base and power.\n");
	scanf("%d %d", &a, &b); // 자연수 입력 받기
	for (i = 1; i <= b; i++) { // i가 b 이하일 때
		num *= a; // num에 a를 계속 곱하기
	}
	printf("%d to the power of %d is %d.\n", a, b, num);
	system("pause");
	return 0;
}