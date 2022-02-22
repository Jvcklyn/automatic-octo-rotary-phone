
/*
파일명: practice05.c
만든이: 성호림
프로그램 내용: 반복문을 이용한 결과 출력
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, j; // 입력받은 수를 저장할 n, 반복문 변수 i, j
	printf("Enter the number.\n");
	scanf("%d", &n); // 수 입력 받기
	for (i = 1; i <= n; i++) { // i가 n 이하일 때
		for (j = 1; j < i + 1; j++) // j가 i+1 이하일 때
			printf("*"); // * 출력
		printf("\n"); // 줄 바꾸기
	}
	for (i = 1; i <= n; i++) { // 위와 같은 반복문
		for (j = 1; j < i + 1; j++)
			printf("%d", j); // j 출력
		printf("\n");
	}
	for (i = 0; i*2+1 <= n; i++) { // i*2+1이 n 이하일 때(홀수 조건 주기)
		for (j = 1; j <= n-(n+1)/2-i; j++) // 공백 나오는 조건 수정
			printf(" ");
		for (j = 1; j <= i*2+1 ; j++) // * 출력
			printf("*");
		printf("\n");
	}


	system("pause");
	return 0;
}