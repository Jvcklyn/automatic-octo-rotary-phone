/*
���ϸ�: practice01.c
������: ��ȣ��
���α׷� ����: �����ͷ� ������ ���� �� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int num;
	int *p=&num; // num�� �ּҸ� �����ϴ� ������ p 
	int **q=&p; // p�� �ּҸ� �����ϴ� ������ q
	
	*p = 5; // p�� ����Ͽ� num�� 5 ����

	printf("%d\n", **q); // q�� ����Ͽ� num�� ����� ������ ���
	
	**q = 10; // q�� ����Ͽ� num�� 10 ����

	printf("%d\n", *p); // p�� ����Ͽ� num�� ����� ������ ���

	system("pause");
}