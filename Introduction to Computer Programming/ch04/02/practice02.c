/*
���ϸ�: practice02.c
������: ��ȣ��
���α׷� ����: 1���� n���� 5�� ����� ������ �� ���ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, sum=0, i=0; // �Է� ������ ������ num, ���� ������ sum, �ݺ��� ���� i

	printf("Enter a natural number.\n");
	scanf("%d", &num); // �Է� ���� �ޱ�
	for (i;i<=num; i++) { // i�� num ������ �� 
		if (i % 5 == 0) // i�� 5�� ����� ��
			continue; // �ݺ��� ó������ ���ư���(�������� ����)
		sum += i; // i�� 5�� ����� �ƴϸ� ������
	}
	printf("The sum is %d\n", sum);
	system("pause");
	return 0;
}