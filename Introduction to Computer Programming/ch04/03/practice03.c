/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: 입력한 자연수의 약수를 모두 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, i; // 입력 받을 정수를 저장할 num, 반복문 변수 i

	printf("Enter a natural number.\n");
	scanf("%d", &num); // 자연수 입력 받기
	for (i=1; i <= num; i++) { // i가 num 이하일 때까지 반복
		if (num % i == 0) { // num을 i로 나누었을 때 나누어 떨어지면
			printf("%d ", i); // 출력하기
		}
			
	}
	system("pause");
	return 0;
}