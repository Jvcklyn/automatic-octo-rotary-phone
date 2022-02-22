/*
���ϸ�: practice05.c
������: ��ȣ��
���α׷� ����: strcat �Լ��� ������ ������ �ϴ� my_strcat �Լ� �ۼ��ϱ�
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strcat(char* dest, char* src) { // my_strcat �Լ� ����
	int i = strlen(dest); // dest�� ���ڿ� ���̸� �����ϴ� ������ ���� i
	int j = 0;

	while (src[j] != '\0') // src���� 0�� ������ ������ �ݺ�(���ڿ��� ��)
		dest[i++] = src[j++]; // dest�� ������ src�� ���� ����

	return dest;
}

void main() {
	for (;;) { // ���� �ݺ�
		char dest[20] = { 0 };
		char src[20] = { 0 };

		printf("ù ��° ���ڿ� �Է� : ");
		scanf("%s", dest);
		printf("�� ��° ���ڿ� �Է� : ");
		scanf("%s", src);

		if (strcmp(dest, "quit") == 0) break; // dest�� ������ quit�� ������ �ݺ�

		printf("%s\n", my_strcat(dest, src)); // my_strcat�� �̿��� ��� ���
	}
	system("pause");
}

