/*
���ϸ�: practice02.c
������: ��ȣ��
���α׷� ����: �Է¹��� ������ �ƽ�Ű �ڵ� ǥ���ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char letter; // ���� �ϳ��� ������ char�� ����
	printf("���� �Է� : "); 
	scanf("%c", &letter); // char�� ���� letter�� �Է¹��� ���� ���� 
	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.", letter, letter); // ��� ���

	system("pause");	   	 

	return 0;
}