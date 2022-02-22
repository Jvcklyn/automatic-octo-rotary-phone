/*
파일명: practice07.c
만든이: 성호림
ㅍ로그램 내용: 양의 정수 2개를 입력받고 홀짝 및 대소 판단하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2; // 양의 정수들을 입력받고 저장할 int형 변수

	printf("양의 정수를 하나 입력하세요: ");
	scanf("%d", &num1); // 양의 정수 하나 입력받기

	printf("양의 정수를 하나 더 입력하세요: ");
	scanf("%d", &num2); // 두 번째 양의 정수 입력받기

	if (num1 >= num2) { // num1이 num2보다 크거나 같을 경우
		if (num1 % 2 == 0) { // num1을 2로 나눈 나머지가 0일 경우
			printf("%d이(가) 큰 수이고 짝수입니다.", num1); 
		}
		else { // num1을 2로 나눈 나머지가 0이 아닐 경우
			printf("%d이(가) 큰 수이고 홀수입니다.", num1);
		}
	}
	else { // num2가 num1보다 클 경우
		if (num2 % 2 == 0){ // num2를 2로 나눈 나머지가 0일 경우
			printf("%d이(가) 큰 수이고 짝수입니다.", num2);
		}
		else { // num2를 2로 나눈 나머지가 0이 아닐 경우
			printf("%d이(가) 큰 수이고 홀수입니다.", num2);
		}
	}

	printf("\n");

	system("pause");

	return 0;
}