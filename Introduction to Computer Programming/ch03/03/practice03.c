/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: 3�� ������� �Ǻ��ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num; // �Է¹��� ������ �����ϱ� ���� int�� ����
	int remainder; // ������ 3���� ���� �������� �����ϱ� ���� int�� ����

	printf("����� �ϳ� �Է��Ͻʽÿ�: ");
	scanf("%d", &num); // ���� �Է� �ޱ�
	
	if (num < 0) {
		printf("������ �Է��߽��ϴ�. \n"); // �Է¹��� ������ 0 �̸��� ��� ���
	}
	else if (num == 0) {
		printf("0�� �Է��߽��ϴ�. \n"); // �Է¹��� ������ 0�� ��� ���
	}
	else {
		remainder = num % 3; // remainder�� �Է¹��� ������ 3���� ���� ������ �����ϱ�
		if (remainder == 0) {
			printf("3�� ����Դϴ�. \n");  // �������� 0�� ��� ���
		}
		else {
			printf("3�� ����� �ƴմϴ�. \n"); // �������� 0�� �ƴ� ��� ���
		}
	}
	system("pause");
	return 0;
}