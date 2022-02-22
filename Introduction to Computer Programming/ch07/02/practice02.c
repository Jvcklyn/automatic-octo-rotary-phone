/*
���ϸ�: practice02.c
������: ��ȣ��
���α׷� ����: �� ������ �Է¹޾� cyclic swap���� ������ ����� ���� �ٲٱ�
*/


#include <stdio.h>
#include <stdlib.h>

void cyclic_swap(int* a, int* b, int* c); // cyclic swap �Լ� ���� 

int main(void) {
	int a, b, c;
	int* pa = &a; //������ ���� pa, pb, pc ���� 
	int* pb = &b;
	int* pc = &c;

	printf("Enter three integers a, b, c.\n");
	scanf("%d %d %d", &a, &b, &c); // a, b, c �Է� �ޱ�
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c);
	cyclic_swap(pa, pb, pc); // cyclic swap �Լ� ȣ��
	printf("After cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c); // ��� ���

	system("pause");
}

void cyclic_swap(int* a, int* b, int* c) { // cyclic �Լ��� ����
	int temp; // �ӽ������� ���� ������ temp ����

	temp = *a; // temp�� ������ �̿��Ͽ� a���� ����
	*a = *b; // ���� �������
	*b = *c; // �� ������ ���� �ٸ��� ����
	*c = temp; // ���������� c�� temp��(a)�� ����
}