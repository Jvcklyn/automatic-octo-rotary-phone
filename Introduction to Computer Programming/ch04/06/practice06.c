/*
파일명: practice06.c
만든이: 성호림
프로그램 내용: 반복문으로 특정 문자열 출력
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j; // 반복문에서 사용할 int형 변수

	for (i = 1; i <= 5; i++) { // 5번 반복하기
		for (j = 0; j < 5 - i; j++) { // 공백 4, 3, 2, 1, 0번 출력하기
			printf(" ");
		}
		for (j = 1; j < i + 1; j++) { // 숫자 1, 12, 123, 1234, 12345 출력하기
			printf("%d", j);
		}
		printf("\n"); // 줄 바꾸기
	}
	system("pause");
	return 0;
}