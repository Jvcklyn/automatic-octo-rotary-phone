/*
���ϸ�: practice04.c
������: ��ȣ��
���α׷� ����: �������� �Ǵ��ϱ�
*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int year; // �Է¹��� ������ ������ int�� ����
	printf("���� �Է�: ");
	scanf("%d", &year); // ���� �Է� �ޱ�

	((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? printf("�����Դϴ�.") : printf("������ �ƴմϴ�.");
	// �������� �Ǵ��ϱ� (4�� ����̸� 100�� ����� �ƴ����� 400�� ����� �͵�), �� �� ��� ���

	printf("\n");

	system("pause");

	return 0;
}