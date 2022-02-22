/*
파일명: practice01.c
만든이: 성호림
프로그램 내용: 입력받은 정수의 범위 결정하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num; // 입력받은 정수를 저장할 int형 변수
	printf("한 개의 정수 입력: ");
	scanf("%d", &num); // 정수 입력 받기

	if (num < 0){
		printf("입력한 값은 0보다 작습니다."); // 0보다 작을 경우 출력
	}
	else if (num < 10){
		printf("입력한 값은 0 이상 10 미만입니다."); // 0보다 작지 않고 10보다 작을 경우 출력 
	}
	else if (num < 20){
		printf("입력한 값은 10 이상 20 미만입니다."); // 0보다 작지 않고 10보다 작지 않고 20보다 작을 경우 출력
	}
	else if (num < 30){
		printf("입력한 값은 20 이상 30 미만입니다."); // 0보다 작지 않고 10보다 작지 않고 20보다 작지 않고 30보다 작을 경우 출력
	}
	else {
		printf("입력한 값은 30 이상입니다."); // 0보다 작지 않고 10보다 작지 않고 20보다 작지 않고 30보다 작지 않을 경우 출력
	}

	printf("\n");

	system("pause");

	return 0;
}
