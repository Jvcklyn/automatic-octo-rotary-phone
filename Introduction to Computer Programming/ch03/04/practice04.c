/*
���ϸ�: practice04.c
������: ��ȣ��
���α׷� ����: ���� �� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int appleprice = 1000; // ��� ������ ����� �����ϱ�
	const int grapeprice = 3000; // ���� ������ ����� �����ϱ�
	const int pearprice = 2000; //  �� ������ ����� �����ϱ�
	const int tangerineprice = 500; // �� ������ ����� �����ϱ�

	int apple, grape, pear, tangerine, result; // ���, ����, ��, ���� ������ ������ int�� ������ ��ü ������ ������ int�� ����

	printf("��� ���� ���� �Է�: ");
	scanf("%d", &apple); // ����� ���� �Է� �ޱ�

	printf("���� ���� ���� �Է�: ");
	scanf("%d", &grape); // ������ ���� �Է� �ޱ�

	printf("�� ���� ���� �Է�: ");
	scanf("%d", &pear); // ���� ���� �Է� �ޱ�

	printf("�� ���� ���� �Է�: ");
	scanf("%d", &tangerine); // ���� ���� �Է� �ޱ�

	result = apple * appleprice + grape * grapeprice + pear * pearprice + tangerine * tangerineprice; // ���ϵ��� �� ���� ���

	if (grape >= 3) 
		result = result * 0.9;	// ������ 3�� �̻��� ��� �� ���ݿ��� 10% ������ ���� �ٽ� result�� ����

	printf("�� ���� �ݾ��� %d�� �Դϴ�.", result); // ��� ���

	system("pause");

	return 0;
}