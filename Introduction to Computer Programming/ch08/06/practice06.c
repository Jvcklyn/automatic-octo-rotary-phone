/*
���ϸ�: practice06.c
������: ��ȣ��
���α׷� ����: ������ �Է� �ޱ� ���������� �����͸� �迭�� �����ϰ� �Լ��� ȣ���Ͽ� �Է¹��� ������ �ִ�, �ּ� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

void min_max(int* arr, int* min, int* max, int length) { // �Լ� ����
	int i;
	*min = *(arr); // �ִ� �ּҿ� �迭�� ù �� ����
	*max = *(arr); 

	for (i = 0; i < length; i++) {
		if (*min > * (arr + i)) // �ּڰ����� �迭�� ���� �� ������
			*min = *(arr + i); // �迭�� ���� �ּڰ��� ����
		if (*max < *(arr + i)) // �ִ񰪺��� �迭�� ���� �� ũ��
			*max = *(arr + i); // �迭�� ���� �ִ񰪿� ����
	}
}
void main() {
	int arr[100] = { 0 }, i = 0, min = 0, max = 0, length, num; // 100�� �̻��� ���� �Է¹��� �ʴ´ٰ� �����Ѵ�. 
	
	printf("Enter a sequence of positive integers.\n");
	while(1) { // ������ ���� ������ �ݺ�
		scanf("%d", &num);
		if (num < 0)
			break;
		else
			arr[i++] = num; // ������ �ƴ϶�� ���� ���� �迭�� ���� �� i�� 1�� ����
	}
	length = i - 1; // min_max �Լ��� �ݺ� Ƚ���� ���ϴ� length
	min_max(arr, &min, &max, length); // �Լ� ȣ��
	printf("Minimum is %d, Maximum is %d.\n", min, max);
	
	system("pause");
}