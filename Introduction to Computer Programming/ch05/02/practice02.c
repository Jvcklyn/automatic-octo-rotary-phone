/*
���ϸ�: practice02.c
������: ��ȣ��
���α׷� ����: �Է¹��� ������ �ּڰ� ���ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int current_min(int n); // �Լ� ȣ��
int num; // �Է¹��� ������ ����

int main(void) {
	for (;;) { // ������ �Ǳ� ������ ���� ����
		printf("Enter a number.\n");
		scanf("%d", &num);
		if (num < 0)
			break;
		printf("Current min is %d.\n", current_min(num)); // �Լ����� ���
	}
	system("pause");
	return 0;
}

int current_min(int n) { // �Լ��� ����, 100 ���ϸ� �Է��Ѵٰ� �����ϰ� �ּڰ� ���ϱ�
	static int min = 100;
		if (num < min)
		min = num;

	return min;
}	
