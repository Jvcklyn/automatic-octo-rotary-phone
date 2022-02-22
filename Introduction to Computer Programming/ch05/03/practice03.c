/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: 음수 n을 입력 받은 후 재귀 호출에 의해 n부터 -1까지의 합을 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int n); // 합을 구할 함수의 호출
int result = 0; // 음수 합을 저장할 정수형 변수

int main(void) {
	int n; // 입력 음수를 저장받을 정수형 변수
	for (;;) { // 음수를 입력할 때까지 무한 루프
		printf("음수를 입력하세요. ");
		scanf("%d", &n);
		if (n < 0) // 음수라면 그대로 결과 출력
			break;
		else // 음수가 아니면 다시 입력
			printf("다시 입력하세요.\n");
	}
	printf("Result : %d\n", sum(n));
	system("pause");
	return 0;
}

int sum(int n) { // 재귀함수의 정의
	result += n;
	if (n == -1) // n이 -1이라면 result 반환
		return result;
	sum(n+1);
}
