/*
���ϸ�: practice04.c
������: ��ȣ��
���α׷� ����: �ڿ��� a, b�� ���� a�� b������ ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, num=1, i; // �Է¹��� �ڿ��� a, b�� ������ ����� ������ ���� num �׸��� �ݺ��� ���� i
	printf("Enter base and power.\n");
	scanf("%d %d", &a, &b); // �ڿ��� �Է� �ޱ�
	for (i = 1; i <= b; i++) { // i�� b ������ ��
		num *= a; // num�� a�� ��� ���ϱ�
	}
	printf("%d to the power of %d is %d.\n", a, b, num);
	system("pause");
	return 0;
}