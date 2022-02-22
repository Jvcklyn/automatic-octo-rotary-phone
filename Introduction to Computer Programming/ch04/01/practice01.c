/*
파일명: practice01.c
만든이: 성호림
프로그램 내용: 입력 정수를 넘지 않는 1부터 n까지의 합 구하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num = 0, maxnum, sum = 0; // 1부터 n까지 더할 때 num이 1씩 올라가는, maxnum은 입력되는, sum은 n까지의 합을 저장할 int형 변수
	printf("Enter a maximum number.\n");
	scanf("%d", &maxnum); // 입력 정수 받기
	while (sum<=maxnum) { 
		num = num + 1; // num 1씩 증가
		sum = sum + num; // sum에 num을 차례대로 더하기
	}
	printf("The sum from 1 to %d is %d.\n", num-1, sum-num); // 결과 출력
	system("pause");
	return 0;
}