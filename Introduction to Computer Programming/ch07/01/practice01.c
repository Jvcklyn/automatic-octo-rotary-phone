/*
���ϸ�: practice01.c
������: ��ȣ��
���α׷� ����: �� ������ �Է¹޾� ���� ����ϱ�

*/

#include <stdio.h>
#include <stdlib.h>
void add(const int a, const int b, int* p); // �Լ� ����

void main() {
	int a, b;
	int result;
	int* ptr=&result; // result�� �ּҰ��� ������ ������ ptr
	   
	printf("Enter two integers.\n");
	scanf("%d %d", &a, &b); // a b �Է¹ޱ�
	add(a, b, ptr); // add �Լ� ȣ��
	   	  
	system("pause");
}

void add(const int a, const int b, int* p) {
	*p = a + b; // ���� ������ ���Ͽ� result�� a+b�� �����ϴ� ȿ��
	printf("The sum is %d.\n", *p); // ��� ���
}