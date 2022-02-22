/*
파일명: practice05.c
만든이: 성호림
프로그램 내용: 
*/

#include <stdio.h>
#include <stdlib.h>

int power(int a, int b); // 거듭제곱 함수를 선언

void main() {
	int base, multiplier; // 입력받은 수를 저장할 정수형 변수
	printf("Enter base and multiplier\n");
	scanf("%d %d", &base, &multiplier); // 입력받은 정수를 저장
	printf("%d to the power of %d is %d\n", base, multiplier, power(base, multiplier)); // 함수의 반환값을 출력
	system("pause");
}

int power(int a, int b) { // 거듭제곱 함수를 정의
	int result=1, i; // 거듭제곱을 저장할 result와 반복문 변수 i
	for (i = 0; i < b; i++) { // 반복문으로 거듭제곱
		result *= a;
	}
	return result;
}