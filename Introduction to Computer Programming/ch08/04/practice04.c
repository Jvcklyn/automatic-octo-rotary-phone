/*
���ϸ�: practice04.c
������: ��ȣ��
���α׷� ����: �Է� ������ �迭�� ���� �� �ش� ���ڿ� ������ ������ ���� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int count_vowel(char *str, int i); // ������ ���·� �迭 �ޱ�

int main() {
	char ch, str[100]; // �ִ� 100�� �Է�
	int i = 0;
	printf("Enter a sample sentence.\n");
	while ((ch = getchar()) != '\n') { // �Է� �� �ޱ�
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
	for (j = 0; j < i; j++) { // ������ ��� num +1
		if ((*(str+j) == 'a') || (*(str + j) == 'e') || (*(str + j) == 'i') || (*(str + j) == 'o') || (*(str + j) == 'u') || (*(str + j) == 'A') || (*(str + j) == 'E') || (*(str + j) == 'I') || (*(str + j) == 'O') || (*(str + j) == 'U'))
			num += 1;
		}
	return num;
}