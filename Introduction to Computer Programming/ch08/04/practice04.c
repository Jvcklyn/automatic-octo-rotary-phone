/*
파일명: practice04.c
만든이: 성호림
프로그램 내용: 입력 문장을 배열에 저장 후 해당 문자에 나오는 모음의 개수 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

int count_vowel(char *str, int i); // 포인터 형태로 배열 받기

int main() {
	char ch, str[100]; // 최대 100자 입력
	int i = 0;
	printf("Enter a sample sentence.\n");
	while ((ch = getchar()) != '\n') { // 입력 값 받기
		str[i] = ch;
		i++;
	}	
	printf("Vowels appear %d times.\n", count_vowel(str, i));
	
	system("pause");
	return 0;
}

int count_vowel(char *str, int i) {
	int num = 0;
	int j = 0;
	for (j = 0; j < i; j++) { // 모음일 경우 num +1
		if ((*(str+j) == 'a') || (*(str + j) == 'e') || (*(str + j) == 'i') || (*(str + j) == 'o') || (*(str + j) == 'u') || (*(str + j) == 'A') || (*(str + j) == 'E') || (*(str + j) == 'I') || (*(str + j) == 'O') || (*(str + j) == 'U'))
			num += 1;
		}
	return num;
}