/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: Ű����κ��� ���� �̸��� ���� �Է� �޾Ƽ� �ϳ��� ���ڿ��� �ٿ��� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char last_name[20]; // ���� �Է¹��� �迭 
	char first_name[20]; // �̸��� �Է¹��� �迭
	char full_name[20] = { 0 }; // ��ģ �̸��� ������ �迭

	printf("���� �Է��Ͻÿ�. : ");
	scanf("%s", last_name);
	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf("%s", first_name);
	
	strcat(full_name, last_name); // full_name�� last_name ���ϱ�
	strcat(full_name, " "); // full_name�� ���� ���ϱ�
	strcat(full_name, first_name); // full_name�� first_name ���ϱ�

	printf("���� ������ �̸��� %s �Դϴ�.\n", full_name);

	system("pause");
}

