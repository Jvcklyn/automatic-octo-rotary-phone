/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: �Է��� �ڿ����� ����� ��� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, i; // �Է� ���� ������ ������ num, �ݺ��� ���� i

	printf("Enter a natural number.\n");
	scanf("%d", &num); // �ڿ��� �Է� �ޱ�
	for (i=1; i <= num; i++) { // i�� num ������ ������ �ݺ�
		if (num % i == 0) { // num�� i�� �������� �� ������ ��������
			printf("%d ", i); // ����ϱ�
		}
			
	}
	system("pause");
	return 0;
}