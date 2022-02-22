/*
파일명: practice07.c
만든이: 성호림
프로그램 내용: 구구단 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j; // 반복문에서의 int형 변수
	for (i = 2; i <= 9; i++) { // 2에서 9까지 8번 반복하기
		for (j = 1; j <= 9; j++){ // 1에서 9까지 9번 반복하기
			printf("%d x %d = %2d  ", i, j, i*j); // 구구단 결과 출력
			}
			printf("\n"); // 단마다 줄 바꾸기
	}
	   
	system("pause");
	return 0;
}
