/*
���ϸ�: practice07.c
������: ��ȣ��
���α׷� ����: ������ ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j; // �ݺ��������� int�� ����
	for (i = 2; i <= 9; i++) { // 2���� 9���� 8�� �ݺ��ϱ�
		for (j = 1; j <= 9; j++){ // 1���� 9���� 9�� �ݺ��ϱ�
			printf("%d x %d = %2d  ", i, j, i*j); // ������ ��� ���
			}
			printf("\n"); // �ܸ��� �� �ٲٱ�
	}
	   
	system("pause");
	return 0;
}
