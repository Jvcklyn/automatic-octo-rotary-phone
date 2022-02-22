/*
���ϸ�: practice05.c
������: ��ȣ��
���α׷� ����: �迭�� ���� ���� �Է��Ͽ� �迭�� ����ϰ� �ٽ� �迭�� ���� �ٲپ� ����ϱ� 
*/

#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr1, int *arr2) { // �迭�� ����ϴ� �Լ�
	int i;
	printf("first: ");
	for (i = 0; i < 5; i++) { // �迭 1 �ݺ������� ���
		printf("%d ", arr1[i]);
		}
	printf("\nsecond: ");
	for (i = 0; i < 5; i++) { // �迭 2 �ݺ������� ���
		printf("%d ", arr2[i]);
	}
}

void swap_array(int* arr1, int* arr2) { // �迭�� ���� �ٲٴ� �Լ�
	int i, temp[5]; // �ӽ÷� �迭 ���� ������ temp �迭
	for (i = 0; i < 5; i++) { 
		temp[i] = arr1[i]; // arr1 ���� temp�� ����
		arr1[i] = arr2[i]; // arr2 ���� arr1�� ����
		arr2[i] = temp[i]; // temp ���� arr2�� ����, ��������� arr1�� arr2 �迭�� �ٲ�
	}
	
}

void main() {
	int arr1[5], arr2[5], i;

	printf("Enter the contents of first array.\n");
	for (i = 0; i < 5; i++) { // �迭 1 �Է¹ޱ�
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter the contents of second array.\n");
	for (i = 0; i < 5; i++) { // �迭 2 �Է¹ޱ�
		scanf("%d", &arr2[i]);
	}

	printf("Before swapping,\n");
	print_array(arr1, arr2); // �迭 ���
	printf("\n");

	printf("After swapping,\n");
	swap_array(arr1, arr2); // �迭 ���� �ٲٱ�
	print_array(arr1, arr2); // �迭 ���
	printf("\n");

	system("pause");
}