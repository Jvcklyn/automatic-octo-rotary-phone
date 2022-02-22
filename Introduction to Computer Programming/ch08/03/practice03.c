/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: ������ �Էµ� ������ ����� a�迭�� �����ϰ�, �Լ��� ȣ���Ͽ� �Է� ������ �K��� b�迭�� ���� �� ���
*/

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *a, int *b, int length); // reverse_array �Լ� ����

void main() { // �� ���α׷��� �ִ� 10���� �Է��� �������� �Ѵ�.
	int original[10] = { 0 };
	int a[10] = { 0 };
	int b[10] = { 0 }; // ���� �迭���� ũ��� 10�̴�.
	int i = 0, num, length=10;
	printf("Enter a sequence of positive integers.\n");
	while (1) { // ������ ���� ������ �ݺ�
		scanf("%d", &num);
		if (num < 0)
			break;
		else
			original[i++]=num;
	}

	for (i = 0; i < length; i++) // original �迭�� �ִ� ���� a�� �ű��
		a[i] = original[i];

	reverse_array(a, b, length); // reverse_array �Լ� ȣ��

	for (i = 0; i < length; i++) // b�� ����� ���� 0�� �ƴ� �� ����Ѵ�. 
		if (b[i]!=0)
	printf("%d ", b[i]);
	printf("\n");

	system("pause");
}


void reverse_array(int *a, int *b, int length) { // reverse_array �Լ� ����
	int i;
	for (i = 0; i < length; i++)
		*(b + i) = *(a + length - 1 - i); // �Ųٷ� ���� �����ϱ�
}