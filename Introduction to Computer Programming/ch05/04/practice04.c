/*
���ϸ�: practice04.c
������: ��ȣ��
���α׷� ����: ����� �Է� ���� �� ȭ�鿡 �Է¹��� ���ڸ�ŭ * ���
*/

#include <stdio.h>
#include <stdlib.h>

int asterisk(int n); // �� ��� �Լ� ����
int num; // �Է¹��� ����� ������ ������ ����

void main() {
	for (;;) { // ����� �Է��ϸ� ���� �������� ���
		printf("����� �Է��ϼ��� : ");
		scanf("%d", &num);
		if (num > 0)
			break;
		printf("�ٽ� �Է��ϼ���.\n");
	}
	asterisk(num); // �� ��� �Լ��� ȣ��
	printf("\n");
	system("pause");
}

int asterisk(int n) { // ��� �Լ�, �Է°��� �پ� 1�� �� ������ *�� ���
	printf("*");
	if (n == 1)
		return 0;
	asterisk(n - 1);
}


