/*
���ϸ�: practice02.c
������: ��ȣ��
���α׷� ����: 10������ 2������ ��ȯ�ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num, array[4], i, j; // �Է� ������ ���� ������ ���� �� �������� ������ �迭
	for (;;) { // ���� 0�� 15 ������ ��� �ٽ� �Է�
		printf("0�� 15 ���� 10���� �Է� : ");
		scanf("%d", &num);
		if (num >= 0 && num <= 15)
			break;
	}
	for (i=0;num>0;i++) { // ���� �������� ������ ��, 2�� ���� ���� ���� num�� �����Ѵ�. �迭�� ������ ����.
		array[i] = num % 2;
		num =num/2;	
	}
	printf("Result : ");
	for (j = i - 1; j >= 0; j--) { // �������� ���� �迭�Ͽ� ���� ����Ѵ�. 
		printf("%d", array[j]); // �״�� ����Ѵ�. 
	}

	printf("\n");

	system("pause");
}