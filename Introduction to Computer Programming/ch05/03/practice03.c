/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: ���� n�� �Է� ���� �� ��� ȣ�⿡ ���� n���� -1������ ���� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int n); // ���� ���� �Լ��� ȣ��
int result = 0; // ���� ���� ������ ������ ����

int main(void) {
	int n; // �Է� ������ ������� ������ ����
	for (;;) { // ������ �Է��� ������ ���� ����
		printf("������ �Է��ϼ���. ");
		scanf("%d", &n);
		if (n < 0) // ������� �״�� ��� ���
			break;
		else // ������ �ƴϸ� �ٽ� �Է�
			printf("�ٽ� �Է��ϼ���.\n");
	}
	printf("Result : %d\n", sum(n));
	system("pause");
	return 0;
}

int sum(int n) { // ����Լ��� ����
	result += n;
	if (n == -1) // n�� -1�̶�� result ��ȯ
		return result;
	sum(n+1);
}
