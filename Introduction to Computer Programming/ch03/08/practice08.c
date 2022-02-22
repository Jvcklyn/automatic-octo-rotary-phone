/*
파일명: practice08.c
만든이: 성호림
프로그램 내용: 정시 출근과 지각 여부 판별하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int hour, min; // 시와 분을 입력받아 저장할 int형 변수

	printf("출근 시간의 시를 입력하세요: ");
	scanf("%d", &hour); // 시를 입력 받기

	printf("출근 시간의 분을 입력하세요: ");
	scanf("%d", &min); // 분을 입력 받기

	if (hour == 9) { // 9시일 경우
		if (min > 30) { // 30분을 초과할 경우
			printf("지각입니다."); // 지각임을 출력
		}
		else { // 9시지만 30분을 초과하지 않았을 경우
			printf("정시 출근입니다."); // 정시 출근임을 출력
		}
	}

	else if (hour < 9) { // 시가 9시보다 이를 경우
		printf("정시 출근입니다."); 
	}

	else { // 시가 10 이상일 경우 
		printf("지각입니다.");
	}

	printf("\n");
	
	system("pause");

	return 0;
}
