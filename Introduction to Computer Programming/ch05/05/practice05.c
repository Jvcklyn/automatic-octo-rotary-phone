/*
���ϸ�: practice05.c
������: ��ȣ��
���α׷� ����: 
*/

#include <stdio.h>
#include <stdlib.h>

int power(int a, int b); // �ŵ����� �Լ��� ����

void main() {
	int base, multiplier; // �Է¹��� ���� ������ ������ ����
	printf("Enter base and multiplier\n");
	scanf("%d %d", &base, &multiplier); // �Է¹��� ������ ����
	printf("%d to the power of %d is %d\n", base, multiplier, power(base, multiplier)); // �Լ��� ��ȯ���� ���
	system("pause");
}

int power(int a, int b) { // �ŵ����� �Լ��� ����
	int result=1, i; // �ŵ������� ������ result�� �ݺ��� ���� i
	for (i = 0; i < b; i++) { // �ݺ������� �ŵ�����
		result *= a;
	}
	return result;
}