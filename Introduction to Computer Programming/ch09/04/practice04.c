/*
���ϸ�: practice04.c
������: ��ȣ��
���α׷� ����: strcmp�Լ��� ������ ������ �ϴ� my_strcmp �Լ� �ۼ��ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int my_strcmp(const char* str1, const char* str2) {
	while (*str1 != '\0' || * str2 != '\0') { // �Ѵ� ���ڿ��� ������ ������
		
		if (*str1 == *str2)	continue; // str1�� str2�� �� ������ ���ٸ� ��� �ݺ� 
		else if (*str1 > * str2) return 1; // str2�� �� ���������� �տ� �ִٸ� 1 ����
		else if (*str1 < *str2) return -1; // str1�� �� ���������� �տ� �ִٸ� -1 ����

		*str1++; // ������ ����(+1)
		*str2++;

		return 0;
	}
}

void main() {
	char str1[20];
	char str2[20];

	printf("ù ��° ���ڿ� �Է� : ");
	scanf("%s", str1);
	printf("�� ��° ���ڿ� �Է� : ");
	scanf("%s", str2);

	printf("%d\n", my_strcmp(str1, str2)); // my_strcmp �Լ��� ��� ���

	system("pause");
}

