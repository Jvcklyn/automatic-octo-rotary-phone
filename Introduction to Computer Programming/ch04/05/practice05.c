
/*
���ϸ�: practice05.c
������: ��ȣ��
���α׷� ����: �ݺ����� �̿��� ��� ���
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, j; // �Է¹��� ���� ������ n, �ݺ��� ���� i, j
	printf("Enter the number.\n");
	scanf("%d", &n); // �� �Է� �ޱ�
	for (i = 1; i <= n; i++) { // i�� n ������ ��
		for (j = 1; j < i + 1; j++) // j�� i+1 ������ ��
			printf("*"); // * ���
		printf("\n"); // �� �ٲٱ�
	}
	for (i = 1; i <= n; i++) { // ���� ���� �ݺ���
		for (j = 1; j < i + 1; j++)
			printf("%d", j); // j ���
		printf("\n");
	}
	for (i = 0; i*2+1 <= n; i++) { // i*2+1�� n ������ ��(Ȧ�� ���� �ֱ�)
		for (j = 1; j <= n-(n+1)/2-i; j++) // ���� ������ ���� ����
			printf(" ");
		for (j = 1; j <= i*2+1 ; j++) // * ���
			printf("*");
		printf("\n");
	}


	system("pause");
	return 0;
}