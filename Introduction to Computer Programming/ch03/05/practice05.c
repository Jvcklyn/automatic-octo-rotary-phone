/*
���ϸ�: practice05.c
������: ��ȣ��
���α׷� ����: ���� ������ ���� ��� �˾ƺ���
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int excel, powerpoint, word; // excel, powerpoint, word ������ ������ int�� ����

	printf("excel ���� ������ �Է��ϼ���: ");
	scanf("%d", &excel); // excel ���� �Է� �ޱ�

	printf("powerpoint ���� ������ �Է��ϼ���: ");
	scanf("%d", &powerpoint); // powerpoint ���� �Է� �ޱ�

	printf("word ���� ������ �Է��ϼ���: ");
	scanf("%d", &word); // word ���� �Է� �ޱ�

	if (excel >= 70 & powerpoint >= 70) {
		printf("���޿� �����߽��ϴ�."); // excel�� powerpoint ������ 70�� �̻��� ��� ���� ����
	}
	else if (excel >= 70 & word >= 70) {
		printf("���޿� �����߽��ϴ�."); // excel�� word ������ 70�� �̻��� ��� ���� ����
	}
	else if (powerpoint >= 70 & word >= 70) {
		printf("���޿� �����߽��ϴ�."); // powerpoint�� word ������ 70�� �̻��� ��� ���� ����
	}
	else {
		printf("���޿� �����߽��ϴ�."); // �� �� ��� ���� ����
	}

	printf("\n");

	system("pause");

	return 0;

}