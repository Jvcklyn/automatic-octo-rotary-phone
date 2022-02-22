/*
파일명: practice01.c
만든이: 성호림
프로그램 내용: 포인터로 데이터 저장 후 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num;
	int *p=&num; // num의 주소를 저장하는 포인터 p 
	int **q=&p; // p의 주소를 저장하는 포인터 q
	
	*p = 5; // p를 사용하여 num에 5 저장

	printf("%d\n", **q); // q를 사용하여 num에 저장된 데이터 출력
	
	**q = 10; // q를 사용하여 num에 10 저장

	printf("%d\n", *p); // p를 사용하여 num에 저장된 데이터 출력

	system("pause");
}