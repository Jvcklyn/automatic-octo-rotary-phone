/*
���ϸ�: practice02.c
������: ��ȣ��
���α׷� ����: �迭�� ����� ���ϵ��� ����� �� �Լ�
*/

#include <stdio.h>
#include <stdlib.h>

double average_by_array(int p[], int length); // �迭 ��ȣ�� �̿��� ���
double average_by_pointer(int *p, int length); // ������ ��� ������ �̿��� ���

int main() {
	int arr[5] = { 10, 40, 50, 20, 15 };

	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
	system("pause");
	return 0;
}

double average_by_array(int p[], int length) {
	int sum = 0;
	int i;
	for (i = 0; i < length; i++) 
		sum += p[i]; // �迭 ��ȣ�� �̿��Ͽ� sum�� �� ����
	
	return sum / length; // ����� return
}


double average_by_pointer(int *p, int length) {
	int sum = 0;
	int i;
	for (i = 0; i < length; i++)
		sum += *(p + i); // ������ ��� ������ �̿��Ͽ� sum�� �� ����

	return sum / length; // ����� return
}