/*
���ϸ�: practice06.c
������: ��ȣ��
���α׷� ����: ������ ���� ������ �̿��Ͽ� �߰� ������ ���
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age;  // ���̸� ������ int�� ����
	char gender; // ������ ������ char�� ����
	double bonus; // �߰� ������ ������ ������ double�� ����

	printf("�����̸� M, �����̸� W�� �Է��ϼ��� : ");
	scanf("%c", &gender); // ���� �Է� �ޱ�

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age); // ���� �Է� �ޱ�

	if ((gender == 'W') || (gender == 'w')) // �����̸� ����
	{
		if (age >= 20) // ���̰� 20�� �̻��� ��
		{
			if (age >= 30) // ���̰� 30�� �̻��� ��
				bonus = 3;
			else 
				bonus = 2; // ���̰� 20�� �̻��̰� 30�� �̸��� ��
		}
		else 
			bonus = 1.5; // ���̰� 20�� �̸��� ��
		
	}
	else // ������ ������ ��
		bonus = 2;
	
	printf("���� ���� �ݾ��� %.1lf�谡 �߰� �����˴ϴ�.\n", bonus); // ��� ���

	system("pause");

	return 0;
}