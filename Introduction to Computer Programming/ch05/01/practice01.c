/*
���ϸ�: practice01.c
������: ��ȣ��
���α׷� ����: �� ������ �Է¹޾� �ִ� �ּ� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

void min_max(int a, int b, int c); // �Լ��� ����
int a, b, c, max, min; // a, b, c �Է¹��� ���� �����ϰ� max, min�� �ִ� �ּ� ������ ������ ����


int main(void) {
	printf("Enter three integers.\n");
	scanf("%d %d %d", &a, &b, &c); // �Է� �ޱ�
	min_max(a, b, c); // �Լ� ȣ��
	printf("min is %d, max is %d.\n", min, max); // ���
	system("pause");
	return 0;
}

void min_max(int a, int b, int c) { // �ִ� �ּҸ� ���ϴ� �Լ�
	if (a > b) {
		max = a;
		min = b;
		if (a > c)
			max = a;
		else
			max = c;
		if (b > c)
			min = c;
		else
			min = b;
	}
	else {
		max = b;
		min = a;
		if (b > c)
			max = b;
		else
			max = c;
		if (a > c)
			min = c;
		else
			min = a;
	}
}