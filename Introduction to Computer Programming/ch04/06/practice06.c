/*
���ϸ�: practice06.c
������: ��ȣ��
���α׷� ����: �ݺ������� Ư�� ���ڿ� ���
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j; // �ݺ������� ����� int�� ����

	for (i = 1; i <= 5; i++) { // 5�� �ݺ��ϱ�
		for (j = 0; j < 5 - i; j++) { // ���� 4, 3, 2, 1, 0�� ����ϱ�
			printf(" ");
		}
		for (j = 1; j < i + 1; j++) { // ���� 1, 12, 123, 1234, 12345 ����ϱ�
			printf("%d", j);
		}
		printf("\n"); // �� �ٲٱ�
	}
	system("pause");
	return 0;
}