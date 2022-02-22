/*
파일명: practice04.c
만든이: 성호림
프로그램 내용: 양수를 입력 받은 후 화면에 입력받은 숫자만큼 * 출력
*/

#include <stdio.h>
#include <stdlib.h>

int asterisk(int n); // 별 출력 함수 선언
int num; // 입력받을 양수를 저장할 정수형 변수

void main() {
	for (;;) { // 양수를 입력하면 무한 루프에서 벗어남
		printf("양수를 입력하세요 : ");
		scanf("%d", &num);
		if (num > 0)
			break;
		printf("다시 입력하세요.\n");
	}
	asterisk(num); // 별 출력 함수의 호출
	printf("\n");
	system("pause");
}

int asterisk(int n) { // 재귀 함수, 입력값이 줄어 1이 될 떄까지 *을 출력
	printf("*");
	if (n == 1)
		return 0;
	asterisk(n - 1);
}


