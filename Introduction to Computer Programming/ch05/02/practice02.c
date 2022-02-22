/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 입력받을 때마다 최솟값 구하기
*/

#include <stdio.h>
#include <stdlib.h>

int current_min(int n); // 함수 호출
int num; // 입력받을 정수형 변수

int main(void) {
	for (;;) { // 음수가 되기 전까지 무한 루프
		printf("Enter a number.\n");
		scanf("%d", &num);
		if (num < 0)
			break;
		printf("Current min is %d.\n", current_min(num)); // 함숫값을 출력
	}
	system("pause");
	return 0;
}

int current_min(int n) { // 함수의 정의, 100 이하만 입력한다고 가정하고 최솟값 구하기
	static int min = 100;
		if (num < min)
		min = num;

	return min;
}	
