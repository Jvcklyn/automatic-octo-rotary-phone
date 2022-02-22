/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: 놀이기구 탑승 가능 여부 확인
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age, height, health, guardian; // 나이와 신장, 건강, 보호자 동반 여부 값을 저장할 int형 변수

	printf("나이 입력 : ");
	scanf("%d", &age); // 나이를 입력받아서 age에 저장
	printf("신장 입력 : ");
	scanf("%d", &height); // 신장을 입력받아서 height에 저장
	printf("건강 입력(심장이 약하면 0, 심장이 강하면 1을 입력) : ");
	scanf("%d", &health); // 건강을 입력받아서 health에 저장
	printf("보호자 동반 여부 입력(보호자가 동반하면 1, 동반하지 않으면 0을 입력) : ");
	scanf("%d", &guardian); // 보호자 동반 여부를 입력받아서 guardian에 저장

	((health == 0) || (height<130) || (age<6 && guardian ==0))  ? printf("탑승이 불가능합니다.") : printf("탑승이 가능합니다.");
	// 심장이 약하거나 신장이 130cm 미만일 경우 아예 탑승 불가, 6세 미만이며 보호자가 동반하지 않는 경우 탑승 불가	  

	printf("\n");
	
	system("pause");

	return 0;
}