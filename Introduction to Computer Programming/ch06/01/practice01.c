/*
파일명: practice01.c
만든이: 성호림
프로그램 내용: 정수 5개를 입력 받아 배열에 저장하고 가장 큰 수와 가장 작은 수 출력
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int min, max, num[5], i; // 최솟값, 최댓값을 저장할 정수형 변수와 입력받을 숫자 배열, 그리고 반복문 변수 i
	printf("Enter five integers separated by blanks\n");
	for(i=0; i<sizeof(num)/sizeof(num[0]); i++){ // num 배열에 숫자 저장하기
		scanf("%d", &num[i]);
	}
	max = num[0]; // 최댓값 초기화
	min = num[0]; // 최솟값 초기화

	for (i=1; i<sizeof(num)/sizeof(num[0]); i++) { // 한 루프에 최댓값 최솟값 동시에 구하기
		if (num[i] > max) {
			max = num[i];
		}
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("min is %d. max is %d\n", min, max); // 결과 출력
	system("pause");
}