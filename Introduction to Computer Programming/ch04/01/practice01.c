/*
���ϸ�: practice01.c
������: ��ȣ��
���α׷� ����: �Է� ������ ���� �ʴ� 1���� n������ �� ���ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num = 0, maxnum, sum = 0; // 1���� n���� ���� �� num�� 1�� �ö󰡴�, maxnum�� �ԷµǴ�, sum�� n������ ���� ������ int�� ����
	printf("Enter a maximum number.\n");
	scanf("%d", &maxnum); // �Է� ���� �ޱ�
	while (sum<=maxnum) { 
		num = num + 1; // num 1�� ����
		sum = sum + num; // sum�� num�� ���ʴ�� ���ϱ�
	}
	printf("The sum from 1 to %d is %d.\n", num-1, sum-num); // ��� ���
	system("pause");
	return 0;
}