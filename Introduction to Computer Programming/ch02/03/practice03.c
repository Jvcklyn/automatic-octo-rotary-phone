/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: ���̱ⱸ ž�� ���� ���� Ȯ��
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age, height, health, guardian; // ���̿� ����, �ǰ�, ��ȣ�� ���� ���� ���� ������ int�� ����

	printf("���� �Է� : ");
	scanf("%d", &age); // ���̸� �Է¹޾Ƽ� age�� ����
	printf("���� �Է� : ");
	scanf("%d", &height); // ������ �Է¹޾Ƽ� height�� ����
	printf("�ǰ� �Է�(������ ���ϸ� 0, ������ ���ϸ� 1�� �Է�) : ");
	scanf("%d", &health); // �ǰ��� �Է¹޾Ƽ� health�� ����
	printf("��ȣ�� ���� ���� �Է�(��ȣ�ڰ� �����ϸ� 1, �������� ������ 0�� �Է�) : ");
	scanf("%d", &guardian); // ��ȣ�� ���� ���θ� �Է¹޾Ƽ� guardian�� ����

	((health == 0) || (height<130) || (age<6 && guardian ==0))  ? printf("ž���� �Ұ����մϴ�.") : printf("ž���� �����մϴ�.");
	// ������ ���ϰų� ������ 130cm �̸��� ��� �ƿ� ž�� �Ұ�, 6�� �̸��̸� ��ȣ�ڰ� �������� �ʴ� ��� ž�� �Ұ�	  

	printf("\n");
	
	system("pause");

	return 0;
}