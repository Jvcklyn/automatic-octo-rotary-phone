/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: n factorial�� ����ϴ� ��� �Լ�
*/
#include <stdio.h>
#include <stdlib.h>

void factorial(int n, int* p); // factorial �Լ� ����

void main() {
	int n, result = 1;
	int* ptr=&result; // result�� �ּҸ� �����ϴ� ����

	printf("Enter a natural number.\n");
	scanf("%d", &n);
	factorial(n, ptr); // factorial �Լ� ȣ��
	printf("%d factorial is %d.\n", n, *ptr);
	
	system("pause");
}

void factorial(int n, int* p) { // factorial �Լ� ����
	if (n == 1)
		return;
	*p *= n;
	factorial(n - 1,p); // ����Լ� ȣ��
}