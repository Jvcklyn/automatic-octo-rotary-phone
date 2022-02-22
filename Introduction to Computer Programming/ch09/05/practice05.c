/*
파일명: practice05.c
만든이: 성호림
프로그램 내용: strcat 함수와 동일한 역할을 하는 my_strcat 함수 작성하기
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strcat(char* dest, char* src) { // my_strcat 함수 선언
	int i = strlen(dest); // dest의 문자열 길이를 저장하는 정수형 변수 i
	int j = 0;

	while (src[j] != '\0') // src에서 0이 나오기 전까지 반복(문자열의 끝)
		dest[i++] = src[j++]; // dest의 끝부터 src의 값을 저장

	return dest;
}

void main() {
	for (;;) { // 무한 반복
		char dest[20] = { 0 };
		char src[20] = { 0 };

		printf("첫 번째 문자열 입력 : ");
		scanf("%s", dest);
		printf("두 번째 문자열 입력 : ");
		scanf("%s", src);

		if (strcmp(dest, "quit") == 0) break; // dest의 내용이 quit일 때까지 반복

		printf("%s\n", my_strcat(dest, src)); // my_strcat을 이용한 결과 출력
	}
	system("pause");
}

