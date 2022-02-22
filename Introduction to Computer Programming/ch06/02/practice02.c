/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 10진수를 2진수로 변환하기
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num, array[4], i, j; // 입력 정수를 받을 정수형 변수 및 나머지를 저장할 배열
	for (;;) { // 값이 0과 15 이하일 경우 다시 입력
		printf("0과 15 사이 10진수 입력 : ");
		scanf("%d", &num);
		if (num >= 0 && num <= 15)
			break;
	}
	for (i=0;num>0;i++) { // 먼저 나머지를 저장한 후, 2로 나눈 몫을 새로 num에 저장한다. 배열에 순차적 저장.
		array[i] = num % 2;
		num =num/2;	
	}
	printf("Result : ");
	for (j = i - 1; j >= 0; j--) { // 나머지는 역순 배열하여 값을 출력한다. 
		printf("%d", array[j]); // 그대로 출력한다. 
	}

	printf("\n");

	system("pause");
}