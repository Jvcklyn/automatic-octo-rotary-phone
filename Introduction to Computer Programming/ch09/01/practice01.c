/*
���ϸ�: practice01.c
������: ��ȣ��
���α׷� ����: �Լ��� ����Ͽ� �� ���� ���ڹ迭�� ����� ���ڿ��� ���� �ٲٱ�
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_string(char* str1, char* str2) { // swap_string �Լ� ����
	char swap[20]; // ���ڿ��� �ӽ÷� ������ swap �迭
	strcpy(swap, str1); // strcpy�� str1�� swap�� ����
	strcpy(str1, str2); // strcpy�� str2�� str1�� ����
	strcpy(str2, swap); // strcpy�� swap�� str2�� ����
}

void main() {
	char str1[20] = "apple";
	char str2[20] = "banana";

	swap_string(str1, str2); // �Լ��� ȣ���Ͽ� �� ���ڿ��� �ٲ۴�

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	system("pause");
}