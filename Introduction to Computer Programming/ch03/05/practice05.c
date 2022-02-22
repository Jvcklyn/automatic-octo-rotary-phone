/*
파일명: practice05.c
만든이: 성호림
프로그램 내용: 시험 점수로 진급 결과 알아보기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int excel, powerpoint, word; // excel, powerpoint, word 점수를 저장할 int형 변수

	printf("excel 시험 점수를 입력하세요: ");
	scanf("%d", &excel); // excel 점수 입력 받기

	printf("powerpoint 시험 점수를 입력하세요: ");
	scanf("%d", &powerpoint); // powerpoint 점수 입력 받기

	printf("word 시험 점수를 입력하세요: ");
	scanf("%d", &word); // word 점수 입력 받기

	if (excel >= 70 & powerpoint >= 70) {
		printf("진급에 성공했습니다."); // excel과 powerpoint 점수가 70점 이상일 경우 진급 성공
	}
	else if (excel >= 70 & word >= 70) {
		printf("진급에 성공했습니다."); // excel과 word 점수가 70점 이상일 경우 진급 성공
	}
	else if (powerpoint >= 70 & word >= 70) {
		printf("진급에 성공했습니다."); // powerpoint와 word 점수가 70점 이상일 경우 진급 성공
	}
	else {
		printf("진급에 실패했습니다."); // 그 외 경우 진급 실패
	}

	printf("\n");

	system("pause");

	return 0;

}