/*
���ϸ�: practice02.c
������: ��ȣ��
���α׷� ����: �� ���� ���� �迭�� ����� ���ڿ� �߿��� ���̰� �� ���ڿ��� ���
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str1[20] = "Long time no see.";
	char str2[20] = "What's up?";

	if (strlen(str1) > strlen(str2)) // str1�� ���̰� str2���� ��ٸ�
		printf("%s\n", str1); // str1 ���
	else // str2�� ���̰� str1���� ��ٸ�
		printf("%s\n", str2); // str2 ���

	system("pause");
}


