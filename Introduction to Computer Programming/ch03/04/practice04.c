/*
파일명: practice04.c
만든이: 성호림
프로그램 내용: 과일 값 계산하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int appleprice = 1000; // 사과 가격을 상수로 고정하기
	const int grapeprice = 3000; // 포도 가격을 상수로 고정하기
	const int pearprice = 2000; //  배 가격을 상수로 고정하기
	const int tangerineprice = 500; // 귤 가격을 상수로 고정하기

	int apple, grape, pear, tangerine, result; // 사과, 포도, 배, 귤의 개수를 저장할 int형 변수와 전체 가격을 저장할 int형 변수

	printf("사과 구매 개수 입력: ");
	scanf("%d", &apple); // 사과의 개수 입력 받기

	printf("포도 구매 개수 입력: ");
	scanf("%d", &grape); // 포도의 개수 입력 받기

	printf("배 구매 개수 입력: ");
	scanf("%d", &pear); // 배의 개수 입력 받기

	printf("귤 구매 개수 입력: ");
	scanf("%d", &tangerine); // 귤의 개수 입력 받기

	result = apple * appleprice + grape * grapeprice + pear * pearprice + tangerine * tangerineprice; // 과일들의 총 가격 계산

	if (grape >= 3) 
		result = result * 0.9;	// 포도가 3개 이상일 경우 총 가격에서 10% 할인한 값을 다시 result에 저장

	printf("총 결제 금액은 %d원 입니다.", result); // 결과 출력

	system("pause");

	return 0;
}