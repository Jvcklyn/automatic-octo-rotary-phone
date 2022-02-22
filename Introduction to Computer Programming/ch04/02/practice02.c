/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 1부터 n까지 5의 배수를 제외한 합 구하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, sum=0, i=0; // 입력 정수를 저장할 num, 합을 저장할 sum, 반복문 변수 i

	printf("Enter a natural number.\n");
	scanf("%d", &num); // 입력 정수 받기
	for (i;i<=num; i++) { // i가 num 이하일 때 
		if (i % 5 == 0) // i가 5의 배수일 때
			continue; // 반복문 처음으로 돌아가기(더해지지 않음)
		sum += i; // i가 5의 배수가 아니면 더해짐
	}
	printf("The sum is %d\n", sum);
	system("pause");
	return 0;
}