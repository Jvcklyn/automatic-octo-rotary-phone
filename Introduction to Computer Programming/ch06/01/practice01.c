/*
���ϸ�: practice01.c
������: ��ȣ��
���α׷� ����: ���� 5���� �Է� �޾� �迭�� �����ϰ� ���� ū ���� ���� ���� �� ���
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int min, max, num[5], i; // �ּڰ�, �ִ��� ������ ������ ������ �Է¹��� ���� �迭, �׸��� �ݺ��� ���� i
	printf("Enter five integers separated by blanks\n");
	for(i=0; i<sizeof(num)/sizeof(num[0]); i++){ // num �迭�� ���� �����ϱ�
		scanf("%d", &num[i]);
	}
	max = num[0]; // �ִ� �ʱ�ȭ
	min = num[0]; // �ּڰ� �ʱ�ȭ

	for (i=1; i<sizeof(num)/sizeof(num[0]); i++) { // �� ������ �ִ� �ּڰ� ���ÿ� ���ϱ�
		if (num[i] > max) {
			max = num[i];
		}
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("min is %d. max is %d\n", min, max); // ��� ���
	system("pause");
}