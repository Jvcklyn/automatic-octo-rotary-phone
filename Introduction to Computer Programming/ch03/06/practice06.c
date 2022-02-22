/*
파일명: practice06.c
만든이: 성호림
프로그램 내용: 성별과 나이 정보를 이용하여 추가 적립금 계산
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age;  // 나이를 저장할 int형 변수
	char gender; // 성별을 저장할 char형 변수
	double bonus; // 추가 적립금 배율을 저장할 double형 변수

	printf("남성이면 M, 여성이면 W를 입력하세요 : ");
	scanf("%c", &gender); // 성별 입력 받기

	printf("나이를 입력하세요 : ");
	scanf("%d", &age); // 나이 입력 받기

	if ((gender == 'W') || (gender == 'w')) // 여자이면 실행
	{
		if (age >= 20) // 나이가 20살 이상일 떄
		{
			if (age >= 30) // 나이가 30살 이상일 때
				bonus = 3;
			else 
				bonus = 2; // 나이가 20살 이상이고 30살 미만일 때
		}
		else 
			bonus = 1.5; // 나이가 20살 미만일 때
		
	}
	else // 성별이 남자일 때
		bonus = 2;
	
	printf("기존 적립 금액의 %.1lf배가 추가 적립됩니다.\n", bonus); // 결과 출력

	system("pause");

	return 0;
}