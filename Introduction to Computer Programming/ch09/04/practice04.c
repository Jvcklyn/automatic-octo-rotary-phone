/*
파일명: practice04.c
만든이: 성호림
프로그램 내용: strcmp함수와 동일한 역할을 하는 my_strcmp 함수 작성하기
*/

#include <stdio.h>
#include <stdlib.h>

int my_strcmp(const char* str1, const char* str2) {
	while (*str1 != '\0' || * str2 != '\0') { // 둘다 문자열이 끝나기 전까지
		
		if (*str1 == *str2)	continue; // str1과 str2의 각 내용이 같다면 계속 반복 
		else if (*str1 > * str2) return 1; // str2이 더 사전식으로 앞에 있다면 1 리턴
		else if (*str1 < *str2) return -1; // str1이 더 사전식으로 앞에 있다면 -1 리턴

		*str1++; // 포인터 연산(+1)
		*str2++;

		return 0;
	}
}

void main() {
	char str1[20];
	char str2[20];

	printf("첫 번째 문자열 입력 : ");
	scanf("%s", str1);
	printf("두 번째 문자열 입력 : ");
	scanf("%s", str2);

	printf("%d\n", my_strcmp(str1, str2)); // my_strcmp 함수로 결과 출력

	system("pause");
}

