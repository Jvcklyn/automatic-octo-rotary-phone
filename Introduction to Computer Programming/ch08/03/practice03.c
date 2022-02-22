/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: 음수가 입력될 때까지 양수를 a배열에 저장하고, 함수를 호출하여 입력 순서와 밙대로 b배열에 저장 후 출력
*/

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *a, int *b, int length); // reverse_array 함수 선언

void main() { // 이 프로그램은 최대 10개의 입력을 가정으로 한다.
	int original[10] = { 0 };
	int a[10] = { 0 };
	int b[10] = { 0 }; // 따라서 배열들의 크기는 10이다.
	int i = 0, num, length=10;
	printf("Enter a sequence of positive integers.\n");
	while (1) { // 음수를 받을 때까지 반복
		scanf("%d", &num);
		if (num < 0)
			break;
		else
			original[i++]=num;
	}

	for (i = 0; i < length; i++) // original 배열에 있는 값을 a로 옮기기
		a[i] = original[i];

	reverse_array(a, b, length); // reverse_array 함수 호출

	for (i = 0; i < length; i++) // b에 저장된 값이 0이 아닐 때 출력한다. 
		if (b[i]!=0)
	printf("%d ", b[i]);
	printf("\n");

	system("pause");
}


void reverse_array(int *a, int *b, int length) { // reverse_array 함수 정의
	int i;
	for (i = 0; i < length; i++)
		*(b + i) = *(a + length - 1 - i); // 거꾸로 값을 저장하기
}